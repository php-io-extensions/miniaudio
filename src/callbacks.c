#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "zend_exceptions.h"
#include "zend_closures.h"
#include "runtime.h"
#include "callbacks.h"
#include "gen/types.h"
#include "gen/trampolines.h"

#include <errno.h>
#include <time.h>

/* ---- queue ----------------------------------------------------------- */

enum { REQ_QUEUED = 0, REQ_TAKEN = 1, REQ_DONE = 2, REQ_DROPPED = 3 };

struct phpma_queue {
	pthread_mutex_t lock;
	pthread_cond_t wake;           /* a request arrived, or a helper finished */
	phpma_req *head, *tail;
	zend_atomic_bool *vm_interrupt;
	pthread_t thread;
	bool closing;
	bool dead;                     /* this process is a fork child: the threads are gone */
};

/* native pointer -> phpma_ctx*, every thread's contexts; read by miniaudio's threads. */
static HashTable phpma_ctx_map;
/* every sub handed to miniaudio, so a pointer coming back can be checked before use */
static HashTable phpma_sub_set;
static pthread_rwlock_t phpma_ctx_lock = PTHREAD_RWLOCK_INITIALIZER;

static void (*phpma_prev_interrupt)(zend_execute_data *execute_data);

static void phpma_serve_pending(void);

static void phpma_interrupt(zend_execute_data *execute_data)
{
	phpma_serve_pending();
	if (phpma_prev_interrupt) {
		phpma_prev_interrupt(execute_data);
	}
}

static void phpma_atfork_child(void);

void phpma_callbacks_minit(void)
{
	zend_hash_init(&phpma_ctx_map, 64, NULL, NULL, 1);
	zend_hash_init(&phpma_sub_set, 64, NULL, NULL, 1);
	phpma_prev_interrupt = zend_interrupt_function;
	zend_interrupt_function = phpma_interrupt;
	pthread_atfork(NULL, NULL, phpma_atfork_child);
	phpma_backends_minit();
}

void phpma_callbacks_rinit(void)
{
	phpma_queue *q = pemalloc(sizeof(*q), 1);
	memset(q, 0, sizeof(*q));
	pthread_mutex_init(&q->lock, NULL);
	pthread_cond_init(&q->wake, NULL);
	q->vm_interrupt = &EG(vm_interrupt);
	q->thread = pthread_self();
	PHPMA_G(queue) = q;
	PHPMA_G(ctx_count) = 0;
	zend_hash_init(&PHPMA_G(value_natives), 8, NULL, NULL, 0);
	zend_hash_init(&PHPMA_G(rawptrs), 8, NULL, NULL, 0);
}

static void phpma_drop_all(phpma_queue *q)
{
	pthread_mutex_lock(&q->lock);
	while (q->head) {
		phpma_req *r = q->head;
		q->head = r->next;
		r->state = REQ_DROPPED;
		pthread_cond_signal(&r->done);
	}
	q->tail = NULL;
	pthread_mutex_unlock(&q->lock);
}

/* Before the request's handles are uninitialized: from here on every callback gets its no-op result. */
void phpma_callbacks_rshutdown_begin(void)
{
	phpma_queue *q = PHPMA_G(queue);
	if (!q) {
		return;
	}
	pthread_mutex_lock(&q->lock);
	q->closing = true;
	pthread_mutex_unlock(&q->lock);
	phpma_drop_all(q);
}


/* After every handle is uninitialized: no thread of this request's devices or jobs remains. */
void phpma_callbacks_rshutdown_end(void)
{
	phpma_queue *q = PHPMA_G(queue);
	zend_ulong key;
	void *native;
	ZEND_HASH_FOREACH_NUM_KEY_PTR(&PHPMA_G(value_natives), key, native) {
		(void)key;
		zend_object *obj = (zend_object *)(uintptr_t)key;
		free(native);
		OBJ_RELEASE(obj);
	} ZEND_HASH_FOREACH_END();
	zend_hash_destroy(&PHPMA_G(value_natives));
	zend_hash_destroy(&PHPMA_G(rawptrs));
	phpma_backends_rshutdown();
	if (!q) {
		return;
	}
	phpma_drop_all(q);
	pthread_mutex_destroy(&q->lock);
	pthread_cond_destroy(&q->wake);
	pefree(q, 1);
	PHPMA_G(queue) = NULL;
}

static void phpma_atfork_child(void)
{
	phpma_fork_gen++;
	/* Only the forking thread exists in the child: a device or job thread will never answer. */
	void *ctx;
	ZEND_HASH_FOREACH_PTR(&phpma_ctx_map, ctx) {
		((phpma_ctx *)ctx)->queue->dead = true;
	} ZEND_HASH_FOREACH_END();
	pthread_rwlock_init(&phpma_ctx_lock, NULL);
}

static void phpma_deadline(struct timespec *ts, uint32_t ms)
{
	clock_gettime(CLOCK_REALTIME, ts);
	ts->tv_sec += ms / 1000;
	ts->tv_nsec += (long)(ms % 1000) * 1000000L;
	if (ts->tv_nsec >= 1000000000L) {
		ts->tv_sec++;
		ts->tv_nsec -= 1000000000L;
	}
}

static void phpma_serve_one(phpma_queue *q, phpma_req *r)
{
	if (EG(exception) || q->closing) {
		r->fallback(r); /* a callback never runs while an exception is pending */
	} else {
		r->serve(r);
	}
}

void phpma_dispatch(phpma_req *r, uint32_t deadline_ms)
{
	phpma_queue *q = r->ctx ? r->ctx->queue : NULL;
	if (!q || q->dead) {
		r->fallback(r);
		return;
	}
	if (pthread_equal(pthread_self(), q->thread)) {
		/* miniaudio called back on the PHP thread itself, inside a binding call */
		phpma_serve_one(q, r);
		return;
	}

	pthread_cond_init(&r->done, NULL);
	r->next = NULL;
	r->state = REQ_QUEUED;

	pthread_mutex_lock(&q->lock);
	if (q->closing) {
		pthread_mutex_unlock(&q->lock);
		pthread_cond_destroy(&r->done);
		r->fallback(r);
		return;
	}
	if (q->tail) {
		q->tail->next = r;
	} else {
		q->head = r;
	}
	q->tail = r;
	zend_atomic_bool_store(q->vm_interrupt, true);
	pthread_cond_broadcast(&q->wake);

	struct timespec ts;
	phpma_deadline(&ts, deadline_ms);
	bool dropped = false;
	while (r->state != REQ_DONE) {
		if (r->state == REQ_DROPPED) {
			dropped = true;
			break;
		}
		if (r->state == REQ_QUEUED) {
			if (pthread_cond_timedwait(&r->done, &q->lock, &ts) == ETIMEDOUT && r->state == REQ_QUEUED) {
				/* not started in time: withdraw it so the owner never serves a stale request */
				phpma_req **pp = &q->head, *prev = NULL;
				while (*pp && *pp != r) {
					prev = *pp;
					pp = &(*pp)->next;
				}
				if (*pp) {
					*pp = r->next;
					if (q->tail == r) {
						q->tail = prev;
					}
				}
				dropped = true;
				break;
			}
		} else {
			pthread_cond_wait(&r->done, &q->lock); /* being served: its arguments must stay valid */
		}
	}
	pthread_mutex_unlock(&q->lock);
	pthread_cond_destroy(&r->done);
	if (dropped) {
		r->fallback(r);
	}
}

static void phpma_serve_pending(void)
{
	phpma_queue *q = PHPMA_G(queue);
	if (!q) {
		return;
	}
	pthread_mutex_lock(&q->lock);
	while (q->head) {
		phpma_req *r = q->head;
		q->head = r->next;
		if (!q->head) {
			q->tail = NULL;
		}
		r->state = REQ_TAKEN;
		pthread_mutex_unlock(&q->lock);
		phpma_serve_one(q, r);
		pthread_mutex_lock(&q->lock);
		r->state = REQ_DONE;
		pthread_cond_signal(&r->done);
	}
	pthread_mutex_unlock(&q->lock);
}

typedef struct {
	void (*fn)(void *);
	void *arg;
	phpma_queue *q;
	bool done;
} phpma_task;

static void *phpma_helper_main(void *p)
{
	phpma_task *t = p;
	t->fn(t->arg);
	pthread_mutex_lock(&t->q->lock);
	t->done = true;
	pthread_cond_broadcast(&t->q->wake);
	pthread_mutex_unlock(&t->q->lock);
	return NULL;
}

/*
 * A resource manager with no job threads only makes progress when someone
 * processes its jobs; uninitializing one of its objects while a load is
 * pending waits on that load. Run the uninit on a helper while this thread
 * processes the jobs (non-blocking), so request end never waits forever.
 */
void phpma_run_pumping(void (*fn)(void *), void *arg, ma_resource_manager *rm)
{
	phpma_queue *q = PHPMA_G(queue);
	pthread_t t;
	if (!q || q->dead) {
		fn(arg);
		return;
	}
	phpma_task task = {fn, arg, q, false};
	if (pthread_create(&t, NULL, phpma_helper_main, &task) != 0) {
		fn(arg);
		return;
	}
	ma_uint32 saved = rm->jobQueue.flags;
	rm->jobQueue.flags |= MA_JOB_QUEUE_FLAG_NON_BLOCKING;
	for (;;) {
		pthread_mutex_lock(&q->lock);
		bool done = task.done;
		pthread_mutex_unlock(&q->lock);
		if (done) {
			break;
		}
		phpma_serve_pending();
		if (ma_resource_manager_process_next_job(rm) == MA_NO_DATA_AVAILABLE) {
			struct timespec ts = {0, 500000};
			nanosleep(&ts, NULL);
		}
	}
	pthread_join(t, NULL);
	rm->jobQueue.flags = saved;
}

void phpma_run_serving(void (*fn)(void *), void *arg)
{
	phpma_queue *q = PHPMA_G(queue);
	pthread_t t;
	if (!q || PHPMA_G(ctx_count) == 0 || q->closing || q->dead) {
		fn(arg);
		return;
	}
	phpma_task task = {fn, arg, q, false};
	if (pthread_create(&t, NULL, phpma_helper_main, &task) != 0) {
		fn(arg);
		return;
	}
	pthread_mutex_lock(&q->lock);
	while (!task.done) {
		if (q->head) {
			pthread_mutex_unlock(&q->lock);
			phpma_serve_pending();
			pthread_mutex_lock(&q->lock);
			continue;
		}
		pthread_cond_wait(&q->wake, &q->lock);
	}
	pthread_mutex_unlock(&q->lock);
	pthread_join(t, NULL);
	phpma_serve_pending();
}

/* ---- contexts -------------------------------------------------------- */

static void phpma_slot_dtor(zval *zv)
{
	zval_ptr_dtor(zv);
}

static phpma_ctx *phpma_ctx_new(void *native, zend_object *owner)
{
	phpma_ctx *ctx = pemalloc(sizeof(*ctx), 1);
	ctx->magic = PHPMA_CTX_MAGIC;
	ctx->queue = PHPMA_G(queue);
	zend_hash_init(&ctx->slots, 8, NULL, phpma_slot_dtor, 0);
	ctx->native = native;
	ctx->owner = owner;
	ctx->subs = NULL;
	pthread_rwlock_wrlock(&phpma_ctx_lock);
	zend_hash_index_update_ptr(&phpma_ctx_map, (zend_ulong)(uintptr_t)(native ? native : (void *)ctx), ctx);
	pthread_rwlock_unlock(&phpma_ctx_lock);
	PHPMA_G(ctx_count)++;
	return ctx;
}

static void phpma_ctx_release(void *p)
{
	phpma_ctx *ctx = p;
	pthread_rwlock_wrlock(&phpma_ctx_lock);
	zend_hash_index_del(&phpma_ctx_map, (zend_ulong)(uintptr_t)(ctx->native ? ctx->native : (void *)ctx));
	pthread_rwlock_unlock(&phpma_ctx_lock);
	if (ctx->owner) {
		phpma_handle *h = phpma_from_obj(ctx->owner);
		if (h->ctx == ctx) {
			h->ctx = NULL;
		}
	}
	zend_hash_destroy(&ctx->slots);
	pthread_rwlock_wrlock(&phpma_ctx_lock);
	while (ctx->subs) {
		phpma_sub *sub = ctx->subs;
		ctx->subs = sub->next;
		zend_hash_index_del(&phpma_sub_set, (zend_ulong)(uintptr_t)sub);
		sub->magic = 0;
		pefree(sub, 1);
	}
	pthread_rwlock_unlock(&phpma_ctx_lock);
	ctx->magic = 0;
	PHPMA_G(ctx_count)--;
	pefree(ctx, 1);
}

/* The handle's context, made on first use and released after its uninit. */
phpma_ctx *phpma_ctx_for(phpma_handle *h)
{
	if (h->ctx) {
		return h->ctx;
	}
	phpma_ctx *ctx = phpma_ctx_new(h->native, &h->std);
	phpma_keep *k = malloc(sizeof(*k));
	if (!k) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	k->ptr = ctx;
	k->release = phpma_ctx_release;
	k->next = h->keep;
	h->keep = k;
	h->ctx = ctx;
	return ctx;
}

phpma_ctx *phpma_frame_ctx(phpma_frame *f, const char *what)
{
	if (!f->target) {
		zend_value_error("%s: callbacks and user data are kept by the handle an _init call initializes; none here", what);
		return NULL;
	}
	return phpma_ctx_for(f->target);
}

phpma_ctx *phpma_ctx_find(void *native)
{
	if (!native) {
		return NULL;
	}
	pthread_rwlock_rdlock(&phpma_ctx_lock);
	phpma_ctx *ctx = zend_hash_index_find_ptr(&phpma_ctx_map, (zend_ulong)(uintptr_t)native);
	pthread_rwlock_unlock(&phpma_ctx_lock);
	return ctx;
}

phpma_sub *phpma_ctx_sub(phpma_ctx *ctx, const char *prefix)
{
	for (phpma_sub *s = ctx->subs; s; s = s->next) {
		if (strcmp(s->prefix, prefix) == 0) {
			return s;
		}
	}
	phpma_sub *s = pemalloc(sizeof(*s), 1);
	s->magic = PHPMA_SUB_MAGIC;
	s->ctx = ctx;
	snprintf(s->prefix, sizeof(s->prefix), "%s", prefix);
	s->next = ctx->subs;
	ctx->subs = s;
	pthread_rwlock_wrlock(&phpma_ctx_lock);
	zend_hash_index_add_empty_element(&phpma_sub_set, (zend_ulong)(uintptr_t)s);
	pthread_rwlock_unlock(&phpma_ctx_lock);
	return s;
}

phpma_sub *phpma_sub_of(void *p)
{
	if (!p) {
		return NULL;
	}
	pthread_rwlock_rdlock(&phpma_ctx_lock);
	bool found = zend_hash_index_exists(&phpma_sub_set, (zend_ulong)(uintptr_t)p);
	pthread_rwlock_unlock(&phpma_ctx_lock);
	return found ? p : NULL;
}

/* Lookup only: safe on miniaudio's threads, which must not allocate PHP memory. */
static phpma_sub *phpma_ctx_sub_find(phpma_ctx *ctx, const char *prefix)
{
	for (phpma_sub *s = ctx->subs; s; s = s->next) {
		if (strcmp(s->prefix, prefix) == 0) {
			return s;
		}
	}
	return NULL;
}

zval *phpma_sub_slot(phpma_sub *sub, const char *field)
{
	if (!sub) {
		return NULL;
	}
	char key[192];
	snprintf(key, sizeof(key), "%s%s", sub->prefix, field);
	return phpma_ctx_slot(sub->ctx, key);
}

void phpma_sub_user(void *p, const char *field, zval *out)
{
	zval *v = phpma_sub_slot(phpma_sub_of(p), field);
	if (v) {
		ZVAL_COPY(out, v);
	} else {
		ZVAL_NULL(out);
	}
}

zval *phpma_ctx_slot(phpma_ctx *ctx, const char *key)
{
	return ctx ? zend_hash_str_find(&ctx->slots, key, strlen(key)) : NULL;
}

void phpma_ctx_set(phpma_ctx *ctx, const char *key, zval *value)
{
	if (!value || Z_TYPE_P(value) == IS_NULL) {
		zend_hash_str_del(&ctx->slots, key, strlen(key));
		return;
	}
	Z_TRY_ADDREF_P(value);
	zend_hash_str_update(&ctx->slots, key, strlen(key), value);
}

bool phpma_call(zval *callable, zval *ret, uint32_t argc, zval *argv)
{
	ZVAL_UNDEF(ret);
	if (!callable || Z_TYPE_P(callable) == IS_NULL) {
		return false;
	}
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;
	if (zend_fcall_info_init(callable, 0, &fci, &fcc, NULL, NULL) == FAILURE) {
		return false;
	}
	fci.retval = ret;
	fci.params = argv;
	fci.param_count = argc;
	if (zend_call_function(&fci, &fcc) == FAILURE || EG(exception)) {
		zval_ptr_dtor(ret);
		ZVAL_UNDEF(ret);
		return false;
	}
	return true;
}

/* A callback's return value as ma_result; a value that is not an int is a TypeError (kept pending). */
ma_result phpma_ret_result(zval *ret, ma_result fallback, const char *what)
{
	if (Z_TYPE_P(ret) == IS_UNDEF) {
		return fallback;
	}
	if (Z_TYPE_P(ret) != IS_LONG) {
		zend_type_error("%s must return int (ma_result), %s returned", what, zend_zval_value_name(ret));
		zval_ptr_dtor(ret);
		return fallback;
	}
	ma_result r = (ma_result)Z_LVAL_P(ret);
	return r;
}

void phpma_ref_init(zval *ref, zval *value)
{
	ZVAL_NEW_REF(ref, value);
}

zval *phpma_ref_val(zval *ref)
{
	return Z_REFVAL_P(ref);
}

static void phpma_user(phpma_ctx *ctx, const char *key, zval *out)
{
	zval *v = phpma_ctx_slot(ctx, key);
	if (v) {
		ZVAL_COPY(out, v);
	} else {
		ZVAL_NULL(out);
	}
}

void phpma_obj_zval(phpma_ctx *ctx, void *native, const phpma_kind *kind, zval *out)
{
	phpma_handle_zval(native, kind, ctx ? ctx->owner : NULL, out);
}

uint32_t phpma_frames_ms(ma_uint32 frames, ma_uint32 rate)
{
	uint32_t ms = rate ? (uint32_t)(((uint64_t)frames * 1000) / rate) : 10;
	return ms < 2 ? 2 : ms;
}


/* ---- device ---------------------------------------------------------- */

static phpma_ctx *phpma_device_ctx(ma_device *d)
{
	phpma_ctx *ctx = phpma_ctx_find(d);
	if (!ctx && d) {
		ctx = phpma_ctx_find(d->pUserData); /* a device an engine made: its user data is the engine */
	}
	return ctx;
}

typedef struct {
	phpma_req r;
	ma_device *dev;
	void *out;
	const void *in;
	ma_uint32 frames;
	const char *key;
} phpma_req_data;

static void phpma_data_fallback(phpma_req *r)
{
	phpma_req_data *q = (phpma_req_data *)r;
	if (q->out) {
		ma_silence_pcm_frames(q->out, q->frames, q->dev->playback.format, q->dev->playback.channels);
	}
}

static void phpma_data_serve(phpma_req *r)
{
	phpma_req_data *q = (phpma_req_data *)r;
	ma_device *d = q->dev;
	size_t out_bytes = q->out ? (size_t)q->frames * ma_get_bytes_per_frame(d->playback.format, d->playback.channels) : 0;
	size_t in_bytes = q->in ? (size_t)q->frames * ma_get_bytes_per_frame(d->capture.format, d->capture.channels) : 0;
	zval args[4], ret, outv;

	phpma_obj_zval(q->r.ctx, d, &phpma_kind_ma_device, &args[0]);
	if (q->out) {
		zend_string *s = zend_string_alloc(out_bytes, 0);
		memset(ZSTR_VAL(s), 0, out_bytes + 1);
		ZVAL_STR(&outv, s);
	} else {
		ZVAL_NULL(&outv);
	}
	phpma_ref_init(&args[1], &outv);
	if (q->in) {
		ZVAL_STRINGL(&args[2], (const char *)q->in, in_bytes);
	} else {
		ZVAL_NULL(&args[2]);
	}
	ZVAL_LONG(&args[3], q->frames);

	phpma_data_fallback(r);
	if (phpma_call(phpma_ctx_slot(q->r.ctx, q->key), &ret, 4, args)) {
		zval *o = phpma_ref_val(&args[1]);
		if (q->out && Z_TYPE_P(o) == IS_STRING) {
			memcpy(q->out, Z_STRVAL_P(o), MIN(Z_STRLEN_P(o), out_bytes));
		}
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&args[0]);
	zval_ptr_dtor(&args[1]);
	zval_ptr_dtor(&args[2]);
}

static void phpma_data_common(ma_device *d, void *out, const void *in, ma_uint32 frames, const char *key)
{
	phpma_req_data q = {{phpma_data_serve, phpma_data_fallback, phpma_device_ctx(d)}, d, out, in, frames, key};
	phpma_dispatch(&q.r, phpma_frames_ms(frames, d->sampleRate));
}

void phpma_tramp_ma_device_config_dataCallback(ma_device *d, void *out, const void *in, ma_uint32 frames)
{
	phpma_data_common(d, out, in, frames, "dataCallback");
}

void phpma_tramp_ma_engine_config_dataCallback(ma_device *d, void *out, const void *in, ma_uint32 frames)
{
	phpma_data_common(d, out, in, frames, "dataCallback");
}

typedef struct {
	phpma_req r;
	const ma_device_notification *n;
	ma_device *dev;
	const char *key;
} phpma_req_notify;

void phpma_nop(phpma_req *r)
{
	(void)r;
}

static void phpma_notify_serve(phpma_req *r)
{
	phpma_req_notify *q = (phpma_req_notify *)r;
	zval arg, ret;
	if (q->n) {
		phpma_to_ma_device_notification(q->n, &arg);
		/* the struct's pDevice: give the borrowed view its owner when the device is an engine's */
		zval *pd = OBJ_PROP_NUM(Z_OBJ(arg), 0);
		if (Z_TYPE_P(pd) == IS_NULL && q->n->pDevice) {
			phpma_obj_zval(q->r.ctx, q->n->pDevice, &phpma_kind_ma_device, pd);
		}
	} else {
		phpma_obj_zval(q->r.ctx, q->dev, &phpma_kind_ma_device, &arg);
	}
	if (phpma_call(phpma_ctx_slot(q->r.ctx, q->key), &ret, 1, &arg)) {
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&arg);
}

static void phpma_notify_common(const ma_device_notification *n)
{
	phpma_req_notify q = {{phpma_notify_serve, phpma_nop, phpma_device_ctx(n->pDevice)}, n, n->pDevice, "notificationCallback"};
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
}

void phpma_tramp_ma_device_config_notificationCallback(const ma_device_notification *n) { phpma_notify_common(n); }
void phpma_tramp_ma_engine_config_notificationCallback(const ma_device_notification *n) { phpma_notify_common(n); }

void phpma_tramp_ma_device_config_stopCallback(ma_device *d)
{
	phpma_req_notify q = {{phpma_notify_serve, phpma_nop, phpma_device_ctx(d)}, NULL, d, "stopCallback"};
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
}

/* ---- engine and sound ------------------------------------------------ */

typedef struct {
	phpma_req r;
	phpma_sub *sub;
	float *frames;
	ma_uint64 count;
} phpma_req_process;

static void phpma_process_serve(phpma_req *r)
{
	phpma_req_process *q = (phpma_req_process *)r;
	ma_engine *e = q->r.ctx->native;
	size_t bytes = (size_t)q->count * ma_engine_get_channels(e) * sizeof(float);
	zval args[3], ret, buf;
	phpma_sub_user(q->sub, "pProcessUserData", &args[0]);
	ZVAL_STRINGL(&buf, (const char *)q->frames, bytes);
	phpma_ref_init(&args[1], &buf);
	ZVAL_LONG(&args[2], (zend_long)q->count);
	if (phpma_call(phpma_sub_slot(q->sub, "onProcess"), &ret, 3, args)) {
		zval *o = phpma_ref_val(&args[1]);
		if (Z_TYPE_P(o) == IS_STRING) {
			memcpy(q->frames, Z_STRVAL_P(o), MIN(Z_STRLEN_P(o), bytes));
		}
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&args[0]);
	zval_ptr_dtor(&args[1]);
}

void phpma_tramp_ma_engine_config_onProcess(void *user, float *frames, ma_uint64 count)
{
	phpma_sub *sub = phpma_sub_of(user);
	phpma_ctx *ctx = sub ? sub->ctx : NULL;
	phpma_req_process q = {{phpma_process_serve, phpma_nop, ctx}, sub, frames, count};
	ma_uint32 rate = ctx ? ma_engine_get_sample_rate(ctx->native) : 0;
	phpma_dispatch(&q.r, phpma_frames_ms((ma_uint32)count, rate));
}

typedef struct {
	phpma_req r;
	phpma_sub *sub;
	ma_sound *sound;
} phpma_req_end;

static void phpma_end_serve(phpma_req *r)
{
	phpma_req_end *q = (phpma_req_end *)r;
	zval args[2], ret;
	phpma_sub_user(q->sub, "pEndCallbackUserData", &args[0]);
	phpma_obj_zval(q->r.ctx, q->sound, &phpma_kind_ma_sound, &args[1]);
	if (phpma_call(phpma_sub_slot(q->sub, "endCallback"), &ret, 2, args)) {
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&args[0]);
	zval_ptr_dtor(&args[1]);
}

static void phpma_end_common(void *user, ma_sound *sound)
{
	phpma_sub *sub = phpma_sub_of(user);
	if (!sub) {
		phpma_ctx *c = phpma_ctx_find(sound);
		sub = c ? phpma_ctx_sub_find(c, "") : NULL;
	}
	phpma_req_end q = {{phpma_end_serve, phpma_nop, sub ? sub->ctx : NULL}, sub, sound};
	phpma_dispatch(&q.r, PHPMA_AUDIO_DEADLINE_MS);
}

void phpma_tramp_ma_sound_config_endCallback(void *user, ma_sound *sound) { phpma_end_common(user, sound); }
void phpma_tramp_ma_sound_group_config_endCallback(void *user, ma_sound *sound) { phpma_end_common(user, sound); }
void phpma_tramp_ma_sound_end_proc(void *user, ma_sound *sound) { phpma_end_common(user, sound); }

/* ---- log ------------------------------------------------------------- */

typedef struct {
	phpma_req r;
	ma_uint32 level;
	const char *msg;
} phpma_req_log;

static void phpma_log_serve(phpma_req *r)
{
	phpma_req_log *q = (phpma_req_log *)r;
	zval args[3], ret;
	phpma_user(q->r.ctx, "pUserData", &args[0]);
	ZVAL_LONG(&args[1], q->level);
	ZVAL_STRING(&args[2], q->msg ? q->msg : "");
	if (phpma_call(phpma_ctx_slot(q->r.ctx, "onLog"), &ret, 3, args)) {
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&args[0]);
	zval_ptr_dtor(&args[2]);
}

void phpma_tramp_ma_log_callback_onLog(void *user, ma_uint32 level, const char *msg)
{
	phpma_sub *sub = phpma_sub_of(user);
	phpma_req_log q = {{phpma_log_serve, phpma_nop, sub ? sub->ctx : NULL}, level, msg};
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
}

/* ---- device enumeration (always on the calling thread) ---------------- */

typedef struct {
	phpma_req r;
	ma_context *context;
	ma_device_type type;
	const ma_device_info *info;
	ma_bool32 result;
} phpma_req_enum;

static void phpma_enum_fallback(phpma_req *r)
{
	((phpma_req_enum *)r)->result = MA_FALSE;
}

static void phpma_enum_serve(phpma_req *r)
{
	phpma_req_enum *q = (phpma_req_enum *)r;
	zval args[4], ret;
	q->result = MA_FALSE;
	phpma_obj_zval(NULL, q->context, &phpma_kind_ma_context, &args[0]);
	ZVAL_LONG(&args[1], q->type);
	phpma_to_ma_device_info(q->info, &args[2]);
	phpma_user(q->r.ctx, "pUserData", &args[3]);
	if (phpma_call(phpma_ctx_slot(q->r.ctx, "callback"), &ret, 4, args)) {
		q->result = zend_is_true(&ret) ? MA_TRUE : MA_FALSE;
		zval_ptr_dtor(&ret);
	}
	for (int i = 0; i < 4; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

ma_bool32 phpma_tramp_ma_enum_devices_callback_proc(ma_context *c, ma_device_type type, const ma_device_info *info, void *user)
{
	phpma_sub *sub = phpma_sub_of(user);
	phpma_req_enum q = {{phpma_enum_serve, phpma_enum_fallback, sub ? sub->ctx : NULL}, c, type, info, MA_FALSE};
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
	return q.result;
}

/* ---- data sources ---------------------------------------------------- */

typedef struct {
	phpma_req r;
	int op;
	ma_data_source *ds;
	void *out;
	ma_uint64 frames;
	ma_uint64 *pFrames;
	ma_format *pFormat;
	ma_uint32 *pChannels, *pRate;
	ma_channel *pMap;
	size_t mapCap;
	ma_bool32 flag;
	ma_result result;
	ma_data_source *next;
} phpma_req_ds;

enum { DS_READ, DS_SEEK, DS_FORMAT, DS_CURSOR, DS_LENGTH, DS_LOOPING, DS_NEXT };

static const char *phpma_ds_keys[] = {"vtable.onRead", "vtable.onSeek", "vtable.onGetDataFormat", "vtable.onGetCursor", "vtable.onGetLength", "vtable.onSetLooping", "onGetNext"};

static void phpma_ds_fallback(phpma_req *r)
{
	phpma_req_ds *q = (phpma_req_ds *)r;
	switch (q->op) {
		case DS_READ:
			if (q->pFrames) *q->pFrames = 0;
			q->result = MA_BUSY; /* no frames this time; miniaudio keeps going */
			break;
		case DS_NEXT:
			q->next = NULL;
			break;
		default:
			q->result = MA_ERROR;
	}
}

static void phpma_ds_serve(phpma_req *r)
{
	phpma_req_ds *q = (phpma_req_ds *)r;
	phpma_ctx *ctx = q->r.ctx;
	zval args[6], ret, a, b, c, d;
	uint32_t argc = 1;
	phpma_obj_zval(ctx, q->ds, &phpma_kind_ma_data_source_base, &args[0]);
	phpma_ds_fallback(r);
	size_t bytes = 0;
	switch (q->op) {
		case DS_READ: {
			bytes = (size_t)q->frames * phpma_ds_bpf(q->ds);
			zend_string *s = zend_string_alloc(bytes, 0);
			memset(ZSTR_VAL(s), 0, bytes + 1);
			ZVAL_STR(&a, s);
			phpma_ref_init(&args[1], &a);
			ZVAL_LONG(&args[2], (zend_long)q->frames);
			ZVAL_LONG(&b, 0);
			phpma_ref_init(&args[3], &b);
			argc = 4;
			break;
		}
		case DS_SEEK:
			ZVAL_LONG(&args[1], (zend_long)q->frames);
			argc = 2;
			break;
		case DS_FORMAT:
			ZVAL_LONG(&a, 0); phpma_ref_init(&args[1], &a);
			ZVAL_LONG(&b, 0); phpma_ref_init(&args[2], &b);
			ZVAL_LONG(&c, 0); phpma_ref_init(&args[3], &c);
			ZVAL_NULL(&d); phpma_ref_init(&args[4], &d);
			ZVAL_LONG(&args[5], (zend_long)q->mapCap);
			argc = 6;
			break;
		case DS_CURSOR:
		case DS_LENGTH:
			ZVAL_LONG(&a, 0); phpma_ref_init(&args[1], &a);
			argc = 2;
			break;
		case DS_LOOPING:
			ZVAL_BOOL(&args[1], q->flag);
			argc = 2;
			break;
		case DS_NEXT:
			break;
	}

	if (phpma_call(phpma_ctx_slot(ctx, phpma_ds_keys[q->op]), &ret, argc, args)) {
		if (q->op == DS_NEXT) {
			if (Z_TYPE(ret) == IS_OBJECT && instanceof_function(Z_OBJCE(ret), phpma_ce_ma_data_source)) {
				phpma_handle *h = phpma_handle_iface_arg(&ret, phpma_ce_ma_data_source, 1);
				if (h) {
					q->next = h->native;
					phpma_ctx_set(ctx, "onGetNext.result", &ret); /* keeps it alive while miniaudio plays it */
				} else if (EG(exception)) {
					q->next = NULL;
				}
			} else if (Z_TYPE(ret) != IS_NULL) {
				zend_type_error("onGetNext must return ?ma_data_source, %s returned", zend_zval_value_name(&ret));
			}
			zval_ptr_dtor(&ret);
		} else {
			q->result = phpma_ret_result(&ret, MA_ERROR, phpma_ds_keys[q->op]);
			switch (q->op) {
				case DS_READ: {
					zval *o = phpma_ref_val(&args[1]);
					ma_uint64 got = (ma_uint64)zval_get_long(phpma_ref_val(&args[3]));
					ma_uint32 bpf = phpma_ds_bpf(q->ds);
					if (got > q->frames) got = q->frames;
					if (Z_TYPE_P(o) == IS_STRING && bpf) {
						if ((size_t)got * bpf > Z_STRLEN_P(o)) got = Z_STRLEN_P(o) / bpf;
						memcpy(q->out, Z_STRVAL_P(o), (size_t)got * bpf);
					} else {
						got = 0;
					}
					if (q->pFrames) *q->pFrames = got;
					break;
				}
				case DS_FORMAT:
					if (q->pFormat) *q->pFormat = (ma_format)zval_get_long(phpma_ref_val(&args[1]));
					if (q->pChannels) *q->pChannels = (ma_uint32)zval_get_long(phpma_ref_val(&args[2]));
					if (q->pRate) *q->pRate = (ma_uint32)zval_get_long(phpma_ref_val(&args[3]));
					if (q->pMap && q->mapCap) {
						zval *m = phpma_ref_val(&args[4]);
						if (Z_TYPE_P(m) == IS_ARRAY) {
							size_t i = 0;
							zval *e;
							ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(m), e) {
								if (i == q->mapCap) break;
								q->pMap[i++] = (ma_channel)zval_get_long(e);
							} ZEND_HASH_FOREACH_END();
						}
					}
					break;
				case DS_CURSOR:
				case DS_LENGTH:
					if (q->pFrames) *q->pFrames = (ma_uint64)zval_get_long(phpma_ref_val(&args[1]));
					break;
			}
		}
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static ma_result phpma_ds_dispatch(phpma_req_ds *q)
{
	q->r.serve = phpma_ds_serve;
	q->r.fallback = phpma_ds_fallback;
	q->r.ctx = phpma_ctx_find(q->ds);
	phpma_dispatch(&q->r, PHPMA_AUDIO_DEADLINE_MS);
	return q->result;
}

ma_result phpma_tramp_ma_data_source_vtable_onRead(ma_data_source *ds, void *out, ma_uint64 frames, ma_uint64 *pRead)
{
	phpma_req_ds q = {.op = DS_READ, .ds = ds, .out = out, .frames = frames, .pFrames = pRead};
	return phpma_ds_dispatch(&q);
}

ma_result phpma_tramp_ma_data_source_vtable_onSeek(ma_data_source *ds, ma_uint64 frame)
{
	phpma_req_ds q = {.op = DS_SEEK, .ds = ds, .frames = frame};
	return phpma_ds_dispatch(&q);
}

ma_result phpma_tramp_ma_data_source_vtable_onGetDataFormat(ma_data_source *ds, ma_format *f, ma_uint32 *c, ma_uint32 *sr, ma_channel *map, size_t cap)
{
	phpma_req_ds q = {.op = DS_FORMAT, .ds = ds, .pFormat = f, .pChannels = c, .pRate = sr, .pMap = map, .mapCap = map ? cap : 0};
	return phpma_ds_dispatch(&q);
}

ma_result phpma_tramp_ma_data_source_vtable_onGetCursor(ma_data_source *ds, ma_uint64 *p)
{
	phpma_req_ds q = {.op = DS_CURSOR, .ds = ds, .pFrames = p};
	return phpma_ds_dispatch(&q);
}

ma_result phpma_tramp_ma_data_source_vtable_onGetLength(ma_data_source *ds, ma_uint64 *p)
{
	phpma_req_ds q = {.op = DS_LENGTH, .ds = ds, .pFrames = p};
	return phpma_ds_dispatch(&q);
}

ma_result phpma_tramp_ma_data_source_vtable_onSetLooping(ma_data_source *ds, ma_bool32 loop)
{
	phpma_req_ds q = {.op = DS_LOOPING, .ds = ds, .flag = loop};
	return phpma_ds_dispatch(&q);
}

ma_data_source *phpma_tramp_ma_data_source_get_next_proc(ma_data_source *ds)
{
	phpma_req_ds q = {.op = DS_NEXT, .ds = ds};
	phpma_ds_dispatch(&q);
	return q.next;
}

/* ---- nodes ----------------------------------------------------------- */

typedef struct {
	phpma_req r;
	ma_node *node;
	const float **in;
	ma_uint32 *pIn;
	float **out;
	ma_uint32 *pOut;
	ma_uint32 outFrames;
	ma_uint32 *pRequired;
	ma_result result;
	bool required;
} phpma_req_node;

static void phpma_node_fallback(phpma_req *r)
{
	phpma_req_node *q = (phpma_req_node *)r;
	if (q->required) {
		q->result = MA_ERROR;
		return;
	}
	ma_uint32 n = ma_node_get_output_bus_count(q->node);
	for (ma_uint32 i = 0; q->out && i < n; i++) {
		if (q->out[i]) {
			memset(q->out[i], 0, (size_t)*q->pOut * ma_node_get_output_channels(q->node, i) * sizeof(float));
		}
	}
}

static void phpma_node_serve(phpma_req *r)
{
	phpma_req_node *q = (phpma_req_node *)r;
	phpma_ctx *ctx = q->r.ctx;
	zval args[5], ret, a, b, c;
	phpma_obj_zval(ctx, q->node, &phpma_kind_ma_node_base, &args[0]);
	phpma_node_fallback(r);
	if (q->required) {
		ZVAL_LONG(&args[1], q->outFrames);
		ZVAL_LONG(&a, 0);
		phpma_ref_init(&args[2], &a);
		if (phpma_call(phpma_ctx_slot(ctx, "vtable.onGetRequiredInputFrameCount"), &ret, 3, args)) {
			q->result = phpma_ret_result(&ret, MA_ERROR, "onGetRequiredInputFrameCount");
			if (q->pRequired) *q->pRequired = (ma_uint32)zval_get_long(phpma_ref_val(&args[2]));
		}
		for (int i = 0; i < 3; i++) zval_ptr_dtor(&args[i]);
		return;
	}
	ma_uint32 nin = ma_node_get_input_bus_count(q->node), nout = ma_node_get_output_bus_count(q->node);
	ma_uint32 inFrames = q->pIn ? *q->pIn : 0, outFrames = *q->pOut;
	if (q->in) {
		array_init_size(&args[1], nin);
		for (ma_uint32 i = 0; i < nin; i++) {
			if (q->in[i]) {
				add_next_index_stringl(&args[1], (const char *)q->in[i], (size_t)inFrames * ma_node_get_input_channels(q->node, i) * sizeof(float));
			} else {
				add_next_index_null(&args[1]);
			}
		}
	} else {
		ZVAL_NULL(&args[1]);
	}
	ZVAL_LONG(&a, inFrames);
	phpma_ref_init(&args[2], &a);
	array_init_size(&b, nout);
	for (ma_uint32 i = 0; i < nout; i++) {
		size_t bytes = (size_t)outFrames * ma_node_get_output_channels(q->node, i) * sizeof(float);
		zend_string *s = zend_string_alloc(bytes, 0);
		memcpy(ZSTR_VAL(s), q->out[i], bytes);
		ZSTR_VAL(s)[bytes] = '\0';
		add_next_index_str(&b, s);
	}
	phpma_ref_init(&args[3], &b);
	ZVAL_LONG(&c, outFrames);
	phpma_ref_init(&args[4], &c);
	if (phpma_call(phpma_ctx_slot(ctx, "vtable.onProcess"), &ret, 5, args)) {
		zval_ptr_dtor(&ret);
		if (q->pIn) {
			zend_long v = zval_get_long(phpma_ref_val(&args[2]));
			*q->pIn = (ma_uint32)(v < 0 ? 0 : MIN((ma_uint32)v, inFrames));
		}
		zend_long ov = zval_get_long(phpma_ref_val(&args[4]));
		*q->pOut = (ma_uint32)(ov < 0 ? 0 : MIN((ma_uint32)ov, outFrames));
		zval *outs = phpma_ref_val(&args[3]);
		if (Z_TYPE_P(outs) == IS_ARRAY) {
			ma_uint32 i = 0;
			zval *e;
			ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(outs), e) {
				if (i == nout) break;
				if (Z_TYPE_P(e) == IS_STRING) {
					size_t bytes = (size_t)outFrames * ma_node_get_output_channels(q->node, i) * sizeof(float);
					memcpy(q->out[i], Z_STRVAL_P(e), MIN(bytes, Z_STRLEN_P(e)));
				}
				i++;
			} ZEND_HASH_FOREACH_END();
		}
	}
	for (int i = 0; i < 5; i++) zval_ptr_dtor(&args[i]);
}

void phpma_tramp_ma_node_vtable_onProcess(ma_node *node, const float **in, ma_uint32 *pIn, float **out, ma_uint32 *pOut)
{
	phpma_req_node q = {{phpma_node_serve, phpma_node_fallback, phpma_ctx_find(node)}, node, in, pIn, out, pOut, 0, NULL, MA_SUCCESS, false};
	phpma_dispatch(&q.r, PHPMA_AUDIO_DEADLINE_MS);
}

ma_result phpma_tramp_ma_node_vtable_onGetRequiredInputFrameCount(ma_node *node, ma_uint32 outFrames, ma_uint32 *pIn)
{
	phpma_req_node q = {{phpma_node_serve, phpma_node_fallback, phpma_ctx_find(node)}, node, NULL, NULL, NULL, NULL, outFrames, pIn, MA_ERROR, true};
	phpma_dispatch(&q.r, PHPMA_AUDIO_DEADLINE_MS);
	return q.result;
}

/* ---- decoder and encoder byte streams --------------------------------- */

typedef struct {
	phpma_req r;
	int op;
	void *obj;
	const phpma_kind *kind;
	void *buf;
	const void *cbuf;
	size_t bytes;
	size_t *pBytes;
	ma_int64 offset;
	ma_seek_origin origin;
	ma_result result;
	const char *key;
} phpma_req_stream;

enum { ST_READ, ST_WRITE, ST_SEEK };

static void phpma_stream_fallback(phpma_req *r)
{
	phpma_req_stream *q = (phpma_req_stream *)r;
	if (q->pBytes) *q->pBytes = 0;
	q->result = MA_ERROR;
}

static void phpma_stream_serve(phpma_req *r)
{
	phpma_req_stream *q = (phpma_req_stream *)r;
	zval args[4], ret, a, b;
	uint32_t argc;
	phpma_obj_zval(q->r.ctx, q->obj, q->kind, &args[0]);
	phpma_stream_fallback(r);
	if (q->op == ST_READ) {
		zend_string *s = zend_string_alloc(q->bytes, 0);
		memset(ZSTR_VAL(s), 0, q->bytes + 1);
		ZVAL_STR(&a, s);
		phpma_ref_init(&args[1], &a);
		ZVAL_LONG(&args[2], (zend_long)q->bytes);
		ZVAL_LONG(&b, 0);
		phpma_ref_init(&args[3], &b);
		argc = 4;
	} else if (q->op == ST_WRITE) {
		ZVAL_STRINGL(&args[1], (const char *)q->cbuf, q->bytes);
		ZVAL_LONG(&args[2], (zend_long)q->bytes);
		ZVAL_LONG(&b, 0);
		phpma_ref_init(&args[3], &b);
		argc = 4;
	} else {
		ZVAL_LONG(&args[1], q->offset);
		ZVAL_LONG(&args[2], q->origin);
		argc = 3;
	}
	if (phpma_call(phpma_ctx_slot(q->r.ctx, q->key), &ret, argc, args)) {
		q->result = phpma_ret_result(&ret, MA_ERROR, q->key);
		if (q->op == ST_READ) {
			zval *o = phpma_ref_val(&args[1]);
			size_t got = (size_t)zval_get_long(phpma_ref_val(&args[3]));
			if (Z_TYPE_P(o) != IS_STRING) got = 0;
			got = MIN(got, MIN(q->bytes, Z_TYPE_P(o) == IS_STRING ? Z_STRLEN_P(o) : 0));
			if (got) memcpy(q->buf, Z_STRVAL_P(o), got);
			if (q->pBytes) *q->pBytes = got;
		} else if (q->op == ST_WRITE) {
			zend_long w = zval_get_long(phpma_ref_val(&args[3]));
			if (q->pBytes) *q->pBytes = (size_t)(w < 0 ? 0 : MIN((size_t)w, q->bytes));
		}
	}
	for (uint32_t i = 0; i < argc; i++) zval_ptr_dtor(&args[i]);
}

static ma_result phpma_stream_dispatch(phpma_req_stream *q)
{
	q->r.serve = phpma_stream_serve;
	q->r.fallback = phpma_stream_fallback;
	q->r.ctx = phpma_ctx_find(q->obj);
	phpma_dispatch(&q->r, PHPMA_JOB_DEADLINE_MS);
	return q->result;
}

ma_result phpma_tramp_ma_decoder_read_proc(ma_decoder *d, void *buf, size_t bytes, size_t *pRead)
{
	phpma_req_stream q = {.op = ST_READ, .obj = d, .kind = &phpma_kind_ma_decoder, .buf = buf, .bytes = bytes, .pBytes = pRead, .key = "onRead"};
	return phpma_stream_dispatch(&q);
}

ma_result phpma_tramp_ma_decoder_seek_proc(ma_decoder *d, ma_int64 offset, ma_seek_origin origin)
{
	phpma_req_stream q = {.op = ST_SEEK, .obj = d, .kind = &phpma_kind_ma_decoder, .offset = offset, .origin = origin, .key = "onSeek"};
	return phpma_stream_dispatch(&q);
}

ma_result phpma_tramp_ma_encoder_write_proc(ma_encoder *e, const void *buf, size_t bytes, size_t *pWritten)
{
	phpma_req_stream q = {.op = ST_WRITE, .obj = e, .kind = &phpma_kind_ma_encoder, .cbuf = buf, .bytes = bytes, .pBytes = pWritten, .key = "onWrite"};
	return phpma_stream_dispatch(&q);
}

ma_result phpma_tramp_ma_encoder_seek_proc(ma_encoder *e, ma_int64 offset, ma_seek_origin origin)
{
	phpma_req_stream q = {.op = ST_SEEK, .obj = e, .kind = &phpma_kind_ma_encoder, .offset = offset, .origin = origin, .key = "onSeek"};
	return phpma_stream_dispatch(&q);
}

/* ---- value objects miniaudio calls through ---------------------------- */

/*
 * A ma_vfs_callbacks or ma_async_notification_callbacks object used as a ma_vfs
 * or ma_async_notification gets one native view for the rest of the request.
 * Its closures are read from the object at each call, so editing them takes
 * effect. The view keeps the object alive until request end.
 */
typedef struct {
	ma_vfs_callbacks cb;
	phpma_ctx ctx;
	zend_object *obj;
} phpma_vfs_native;

typedef struct {
	ma_async_notification_callbacks cb;
	phpma_ctx ctx;
	zend_object *obj;
} phpma_notify_native;

static void *phpma_value_native_get(zval *zv)
{
	return zend_hash_index_find_ptr(&PHPMA_G(value_natives), (zend_ulong)(uintptr_t)Z_OBJ_P(zv));
}

static void phpma_value_native_put(zval *zv, void *native)
{
	GC_ADDREF(Z_OBJ_P(zv));
	zend_hash_index_update_ptr(&PHPMA_G(value_natives), (zend_ulong)(uintptr_t)Z_OBJ_P(zv), native);
}

static zval *phpma_obj_prop(zend_object *obj, const char *name)
{
	zend_property_info *info = zend_hash_str_find_ptr(&obj->ce->properties_info, name, strlen(name));
	return info ? OBJ_PROP(obj, info->offset) : NULL;
}

typedef struct {
	phpma_req r;
	int op;
	phpma_vfs_native *vfs;
	const char *path;
	const wchar_t *wpath;
	ma_uint32 mode;
	ma_vfs_file *pFile;
	ma_vfs_file file;
	void *buf;
	const void *cbuf;
	size_t bytes;
	size_t *pBytes;
	ma_int64 offset;
	ma_seek_origin origin;
	ma_int64 *pCursor;
	ma_file_info *pInfo;
	ma_result result;
} phpma_req_vfs;

enum { VFS_OPEN, VFS_OPENW, VFS_CLOSE, VFS_READ, VFS_WRITE, VFS_SEEK, VFS_TELL, VFS_INFO };
static const char *phpma_vfs_keys[] = {"onOpen", "onOpenW", "onClose", "onRead", "onWrite", "onSeek", "onTell", "onInfo"};

static void phpma_vfs_fallback(phpma_req *r)
{
	phpma_req_vfs *q = (phpma_req_vfs *)r;
	if (q->pBytes) *q->pBytes = 0;
	q->result = MA_ERROR;
}

/* The PHP value a PHP VFS handed out as its file: boxed on the owner thread, freed by onClose. */
static zval *phpma_vfs_box(ma_vfs_file f)
{
	return (zval *)f;
}

static void phpma_vfs_serve(phpma_req *r)
{
	phpma_req_vfs *q = (phpma_req_vfs *)r;
	zval args[5], ret, a, b;
	uint32_t argc = 2;
	phpma_vfs_fallback(r);
	ZVAL_OBJ_COPY(&args[0], q->vfs->obj);
	if (q->op == VFS_OPEN || q->op == VFS_OPENW) {
		if (q->op == VFS_OPEN) {
			ZVAL_STRING(&args[1], q->path ? q->path : "");
		} else {
			phpma_wstr_zval(q->wpath, &args[1]);
		}
		ZVAL_LONG(&args[2], q->mode);
		ZVAL_NULL(&a);
		phpma_ref_init(&args[3], &a);
		argc = 4;
	} else {
		zval *box = phpma_vfs_box(q->file);
		if (box) {
			ZVAL_COPY(&args[1], box);
		} else {
			ZVAL_NULL(&args[1]);
		}
		switch (q->op) {
			case VFS_READ: {
				zend_string *s = zend_string_alloc(q->bytes, 0);
				memset(ZSTR_VAL(s), 0, q->bytes + 1);
				ZVAL_STR(&a, s);
				phpma_ref_init(&args[2], &a);
				ZVAL_LONG(&args[3], (zend_long)q->bytes);
				ZVAL_LONG(&b, 0);
				phpma_ref_init(&args[4], &b);
				argc = 5;
				break;
			}
			case VFS_WRITE:
				ZVAL_STRINGL(&args[2], (const char *)q->cbuf, q->bytes);
				ZVAL_LONG(&args[3], (zend_long)q->bytes);
				ZVAL_LONG(&b, 0);
				phpma_ref_init(&args[4], &b);
				argc = 5;
				break;
			case VFS_SEEK:
				ZVAL_LONG(&args[2], q->offset);
				ZVAL_LONG(&args[3], q->origin);
				argc = 4;
				break;
			case VFS_TELL:
				ZVAL_LONG(&a, 0);
				phpma_ref_init(&args[2], &a);
				argc = 3;
				break;
			case VFS_INFO: {
				ma_file_info zero;
				memset(&zero, 0, sizeof(zero));
				phpma_to_ma_file_info(&zero, &args[2]);
				argc = 3;
				break;
			}
		}
	}

	if (phpma_call(phpma_obj_prop(q->vfs->obj, phpma_vfs_keys[q->op]), &ret, argc, args)) {
		q->result = phpma_ret_result(&ret, MA_ERROR, phpma_vfs_keys[q->op]);
		switch (q->op) {
			case VFS_OPEN:
			case VFS_OPENW:
				if (q->result == MA_SUCCESS && q->pFile) {
					zval *box = emalloc(sizeof(zval));
					ZVAL_COPY(box, phpma_ref_val(&args[3]));
					*q->pFile = box;
				}
				break;
			case VFS_CLOSE:
				if (q->result == MA_SUCCESS) {
					zval *box = phpma_vfs_box(q->file);
					if (box) {
						zval_ptr_dtor(box);
						efree(box);
					}
				}
				break;
			case VFS_READ: {
				zval *o = phpma_ref_val(&args[2]);
				size_t got = (size_t)zval_get_long(phpma_ref_val(&args[4]));
				if (Z_TYPE_P(o) != IS_STRING) got = 0;
				got = MIN(got, MIN(q->bytes, Z_TYPE_P(o) == IS_STRING ? Z_STRLEN_P(o) : 0));
				if (got) memcpy(q->buf, Z_STRVAL_P(o), got);
				if (q->pBytes) *q->pBytes = got;
				break;
			}
			case VFS_WRITE: {
				zend_long w = zval_get_long(phpma_ref_val(&args[4]));
				if (q->pBytes) *q->pBytes = (size_t)(w < 0 ? 0 : MIN((size_t)w, q->bytes));
				break;
			}
			case VFS_TELL:
				if (q->pCursor) *q->pCursor = (ma_int64)zval_get_long(phpma_ref_val(&args[2]));
				break;
			case VFS_INFO:
				if (q->pInfo) {
					phpma_frame f;
					phpma_frame_init(&f);
					if (phpma_from_ma_file_info(Z_OBJ(args[2]), q->pInfo, &f) == FAILURE) {
						q->result = MA_ERROR;
					}
					phpma_frame_free(&f);
				}
				break;
		}
	}
	for (uint32_t i = 0; i < argc; i++) zval_ptr_dtor(&args[i]);
}

static ma_result phpma_vfs_dispatch(phpma_req_vfs *q, ma_vfs *pVFS)
{
	q->vfs = (phpma_vfs_native *)pVFS;
	q->r.serve = phpma_vfs_serve;
	q->r.fallback = phpma_vfs_fallback;
	q->r.ctx = &q->vfs->ctx;
	phpma_dispatch(&q->r, PHPMA_JOB_DEADLINE_MS);
	return q->result;
}

static ma_result phpma_vfs_onOpen(ma_vfs *v, const char *path, ma_uint32 mode, ma_vfs_file *pFile)
{
	phpma_req_vfs q = {.op = VFS_OPEN, .path = path, .mode = mode, .pFile = pFile};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onOpenW(ma_vfs *v, const wchar_t *path, ma_uint32 mode, ma_vfs_file *pFile)
{
	phpma_req_vfs q = {.op = VFS_OPENW, .wpath = path, .mode = mode, .pFile = pFile};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onClose(ma_vfs *v, ma_vfs_file file)
{
	phpma_req_vfs q = {.op = VFS_CLOSE, .file = file};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onRead(ma_vfs *v, ma_vfs_file file, void *dst, size_t bytes, size_t *pRead)
{
	phpma_req_vfs q = {.op = VFS_READ, .file = file, .buf = dst, .bytes = bytes, .pBytes = pRead};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onWrite(ma_vfs *v, ma_vfs_file file, const void *src, size_t bytes, size_t *pWritten)
{
	phpma_req_vfs q = {.op = VFS_WRITE, .file = file, .cbuf = src, .bytes = bytes, .pBytes = pWritten};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onSeek(ma_vfs *v, ma_vfs_file file, ma_int64 offset, ma_seek_origin origin)
{
	phpma_req_vfs q = {.op = VFS_SEEK, .file = file, .offset = offset, .origin = origin};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onTell(ma_vfs *v, ma_vfs_file file, ma_int64 *pCursor)
{
	phpma_req_vfs q = {.op = VFS_TELL, .file = file, .pCursor = pCursor};
	return phpma_vfs_dispatch(&q, v);
}

static ma_result phpma_vfs_onInfo(ma_vfs *v, ma_vfs_file file, ma_file_info *pInfo)
{
	phpma_req_vfs q = {.op = VFS_INFO, .file = file, .pInfo = pInfo};
	return phpma_vfs_dispatch(&q, v);
}

static void phpma_embedded_ctx(phpma_ctx *ctx)
{
	memset(ctx, 0, sizeof(*ctx));
	ctx->magic = PHPMA_CTX_MAGIC;
	ctx->queue = PHPMA_G(queue);
}

void *phpma_vfs_value_native(zval *zv)
{
	phpma_vfs_native *n = phpma_value_native_get(zv);
	if (n) {
		return n;
	}
	n = calloc(1, sizeof(*n));
	if (!n) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	n->cb.onOpen = phpma_vfs_onOpen;
	n->cb.onOpenW = phpma_vfs_onOpenW;
	n->cb.onClose = phpma_vfs_onClose;
	n->cb.onRead = phpma_vfs_onRead;
	n->cb.onWrite = phpma_vfs_onWrite;
	n->cb.onSeek = phpma_vfs_onSeek;
	n->cb.onTell = phpma_vfs_onTell;
	n->cb.onInfo = phpma_vfs_onInfo;
	phpma_embedded_ctx(&n->ctx);
	n->obj = Z_OBJ_P(zv);
	phpma_value_native_put(zv, n);
	return n;
}

typedef struct {
	phpma_req r;
	phpma_notify_native *n;
} phpma_req_signal;

static void phpma_signal_serve(phpma_req *r)
{
	phpma_req_signal *q = (phpma_req_signal *)r;
	zval arg, ret;
	ZVAL_OBJ_COPY(&arg, q->n->obj);
	if (phpma_call(phpma_obj_prop(q->n->obj, "onSignal"), &ret, 1, &arg)) {
		zval_ptr_dtor(&ret);
	}
	zval_ptr_dtor(&arg);
}

static void phpma_notify_onSignal(ma_async_notification *p)
{
	phpma_notify_native *n = p;
	phpma_req_signal q = {{phpma_signal_serve, phpma_nop, &n->ctx}, n};
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
}

void *phpma_notification_value_native(zval *zv)
{
	phpma_notify_native *n = phpma_value_native_get(zv);
	if (n) {
		return n;
	}
	n = calloc(1, sizeof(*n));
	if (!n) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	n->cb.onSignal = phpma_notify_onSignal;
	phpma_embedded_ctx(&n->ctx);
	n->obj = Z_OBJ_P(zv);
	phpma_value_native_put(zv, n);
	return n;
}

/* ---- log callbacks --------------------------------------------------- */


ZEND_FUNCTION(ma_log_callback_init)
{
	zval *cb = NULL, *user;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(cb)
		Z_PARAM_ZVAL(user)
	ZEND_PARSE_PARAMETERS_END();

	object_init_ex(return_value, phpma_ce_ma_log_callback);
	zend_object *o = Z_OBJ_P(return_value);
	if (Z_TYPE_P(cb) != IS_NULL) {
		zval closure;
		if (!zend_is_callable(cb, 0, NULL)) {
			zend_argument_type_error(1, "must be a valid callback or null");
			RETURN_THROWS();
		}
		if (Z_TYPE_P(cb) == IS_OBJECT && Z_OBJCE_P(cb) == zend_ce_closure) {
			ZVAL_COPY(&closure, cb);
		} else {
			zval fn;
			ZVAL_STRING(&fn, "Closure::fromCallable");
			bool ok = call_user_function(NULL, NULL, &fn, &closure, 1, cb) == SUCCESS && !EG(exception);
			zval_ptr_dtor(&fn);
			if (!ok) {
				zval_ptr_dtor(&closure);
				RETURN_THROWS();
			}
		}
		zval_ptr_dtor(OBJ_PROP_NUM(o, 0));
		ZVAL_COPY_VALUE(OBJ_PROP_NUM(o, 0), &closure);
	}
	zval_ptr_dtor(OBJ_PROP_NUM(o, 1));
	ZVAL_COPY(OBJ_PROP_NUM(o, 1), user);
}

/* Each registered log callback gets its own context, kept by the log until unregistered or uninit. */
static phpma_ctx *phpma_log_ctx_add(phpma_handle *h, zend_object *cb)
{
	phpma_ctx *ctx = phpma_ctx_new(NULL, &h->std);
	phpma_ctx_set(ctx, "onLog", OBJ_PROP_NUM(cb, 0));
	phpma_ctx_set(ctx, "pUserData", OBJ_PROP_NUM(cb, 1));
	phpma_keep *k = malloc(sizeof(*k));
	if (!k) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	k->ptr = ctx;
	k->release = phpma_ctx_release;
	k->next = h->keep;
	h->keep = k;
	return ctx;
}

static void phpma_log_ctx_remove(phpma_handle *h, phpma_ctx *ctx)
{
	for (phpma_keep **pp = &h->keep; *pp; pp = &(*pp)->next) {
		if ((*pp)->ptr == ctx) {
			phpma_keep *k = *pp;
			*pp = k->next;
			k->release(k->ptr);
			free(k);
			return;
		}
	}
}

static bool phpma_same(zval *a, zval *b)
{
	if (!a || !b) {
		return (!a || Z_TYPE_P(a) == IS_NULL) && (!b || Z_TYPE_P(b) == IS_NULL);
	}
	return zend_is_identical(a, b);
}

ZEND_FUNCTION(ma_log_register_callback)
{
	zval *zlog = NULL, *zcb;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zlog, phpma_ce_ma_log)
		Z_PARAM_OBJECT_OF_CLASS(zcb, phpma_ce_ma_log_callback)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h = NULL;
	if (zlog && !(h = phpma_handle_arg(zlog, &phpma_kind_ma_log, 1, true))) {
		RETURN_THROWS();
	}
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	zend_object *cb = Z_OBJ_P(zcb);
	ma_log_callback c = {NULL, NULL};
	phpma_ctx *ctx = NULL;
	if (Z_TYPE_P(OBJ_PROP_NUM(cb, 0)) != IS_NULL) {
		ctx = phpma_log_ctx_add(h, cb);
		c.onLog = phpma_tramp_ma_log_callback_onLog;
		c.pUserData = phpma_ctx_sub(ctx, "");
	}
	ma_result r = ma_log_register_callback(h->native, c);
	if (r != MA_SUCCESS && ctx) {
		phpma_log_ctx_remove(h, ctx);
	}
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_log_unregister_callback)
{
	zval *zlog = NULL, *zcb;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zlog, phpma_ce_ma_log)
		Z_PARAM_OBJECT_OF_CLASS(zcb, phpma_ce_ma_log_callback)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h = NULL;
	if (zlog && !(h = phpma_handle_arg(zlog, &phpma_kind_ma_log, 1, true))) {
		RETURN_THROWS();
	}
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	zend_object *cb = Z_OBJ_P(zcb);
	/* upstream matches onLog and pUserData; the binding matches the PHP callable and user data */
	for (phpma_keep *k = h->keep; k; k = k->next) {
		if (k->release != phpma_ctx_release) {
			continue;
		}
		phpma_ctx *ctx = k->ptr;
		if (ctx->native == NULL && ctx != h->ctx
				&& phpma_same(phpma_ctx_slot(ctx, "onLog"), OBJ_PROP_NUM(cb, 0))
				&& phpma_same(phpma_ctx_slot(ctx, "pUserData"), OBJ_PROP_NUM(cb, 1))) {
			ma_log_callback c = {phpma_tramp_ma_log_callback_onLog, phpma_ctx_sub(ctx, "")};
			ma_result r = ma_log_unregister_callback(h->native, c);
			if (r == MA_SUCCESS) {
				phpma_log_ctx_remove(h, ctx);
			}
			RETURN_LONG(r);
		}
	}
	ma_log_callback none = {NULL, NULL};
	RETURN_LONG(ma_log_unregister_callback(h->native, none));
}

ZEND_FUNCTION(ma_data_source_get_next_callback)
{
	zval *zds = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zds, phpma_ce_ma_data_source)
	ZEND_PARSE_PARAMETERS_END();

	if (!zds) {
		RETURN_NULL();
	}
	phpma_handle *h = NULL;
	void *native = phpma_iface_native(zds, phpma_ce_ma_data_source, 1, &h);
	if (!native) {
		RETURN_THROWS();
	}
	if (ma_data_source_get_next_callback(native) != phpma_tramp_ma_data_source_get_next_proc || !h || !h->ctx) {
		RETURN_NULL();
	}
	zval *cb = phpma_ctx_slot(h->ctx, "onGetNext");
	if (cb) {
		RETURN_COPY(cb);
	}
	RETURN_NULL();
}
