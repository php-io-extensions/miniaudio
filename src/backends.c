/*
 * Callback families that plug PHP into miniaudio's extension points: custom
 * resampling backends, custom decoding backends, custom device backends, and
 * custom jobs. Same queue as callbacks.c: miniaudio's threads post, the owning
 * PHP thread serves.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "zend_exceptions.h"
#include "runtime.h"
#include "callbacks.h"
#include "gen/types.h"
#include "gen/trampolines.h"
#include "../stubs/backends_arginfo.h"

/* ---- proc objects ---------------------------------------------------- */

typedef struct {
	void *fn;
	void *user;
	bool valid;
	zend_object std;
} phpma_proc;

static zend_class_entry *phpma_ce_read_proc, *phpma_ce_seek_proc, *phpma_ce_tell_proc, *phpma_ce_enum_proc;
static zend_object_handlers phpma_proc_handlers;

static inline phpma_proc *phpma_proc_from(zend_object *o)
{
	return (phpma_proc *)((char *)o - XtOffsetOf(phpma_proc, std));
}

static zend_object *phpma_proc_create(zend_class_entry *ce)
{
	phpma_proc *p = zend_object_alloc(sizeof(phpma_proc), ce);
	p->fn = NULL;
	p->user = NULL;
	p->valid = false;
	zend_object_std_init(&p->std, ce);
	object_properties_init(&p->std, ce);
	p->std.handlers = &phpma_proc_handlers;
	return &p->std;
}

static void phpma_proc_new(zend_class_entry *ce, void *fn, void *user, zval *out)
{
	object_init_ex(out, ce);
	phpma_proc *p = phpma_proc_from(Z_OBJ_P(out));
	p->fn = fn;
	p->user = user;
	p->valid = true;
}

static void phpma_proc_invalidate(zval *zv)
{
	if (zv && Z_TYPE_P(zv) == IS_OBJECT) {
		phpma_proc_from(Z_OBJ_P(zv))->valid = false;
	}
}

static phpma_proc *phpma_proc_check(zval *this_ptr, zend_long user)
{
	phpma_proc *p = phpma_proc_from(Z_OBJ_P(this_ptr));
	if (!p->valid) {
		zend_throw_error(NULL, "%s is no longer valid: miniaudio released it", ZSTR_VAL(Z_OBJCE_P(this_ptr)->name));
		return NULL;
	}
	if ((void *)(uintptr_t)user != p->user) {
		zend_argument_value_error(1, "must be the pUserData miniaudio passed with this proc");
		return NULL;
	}
	return p;
}

ZEND_METHOD(ma_read_proc, __invoke)
{
	zend_long user, n;
	zval *zbuf, *zgot;
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(user)
		Z_PARAM_ZVAL(zbuf)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(zgot)
	ZEND_PARSE_PARAMETERS_END();
	phpma_proc *p = phpma_proc_check(ZEND_THIS, user);
	if (!p) {
		RETURN_THROWS();
	}
	if (n < 0 || (size_t)n > ZSTR_MAX_LEN) {
		zend_argument_value_error(3, "must be between 0 and the largest string size");
		RETURN_THROWS();
	}
	zend_string *s = zend_string_alloc((size_t)n, 0);
	size_t got = 0;
	ma_result r = ((ma_read_proc)p->fn)(p->user, ZSTR_VAL(s), (size_t)n, &got);
	got = MIN(got, (size_t)n);
	s = zend_string_truncate(s, got, 0);
	ZSTR_VAL(s)[got] = '\0';
	ZEND_TRY_ASSIGN_REF_STR(zbuf, s);
	ZEND_TRY_ASSIGN_REF_LONG(zgot, (zend_long)got);
	RETURN_LONG(r);
}

ZEND_METHOD(ma_seek_proc, __invoke)
{
	zend_long user, offset, origin;
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(user)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(origin)
	ZEND_PARSE_PARAMETERS_END();
	phpma_proc *p = phpma_proc_check(ZEND_THIS, user);
	if (!p) {
		RETURN_THROWS();
	}
	RETURN_LONG(((ma_seek_proc)p->fn)(p->user, (ma_int64)offset, (ma_seek_origin)origin));
}

ZEND_METHOD(ma_tell_proc, __invoke)
{
	zend_long user;
	zval *zcur;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(user)
		Z_PARAM_ZVAL(zcur)
	ZEND_PARSE_PARAMETERS_END();
	phpma_proc *p = phpma_proc_check(ZEND_THIS, user);
	if (!p) {
		RETURN_THROWS();
	}
	ma_int64 cur = 0;
	ma_result r = ((ma_tell_proc)p->fn)(p->user, &cur);
	ZEND_TRY_ASSIGN_REF_LONG(zcur, (zend_long)cur);
	RETURN_LONG(r);
}

ZEND_METHOD(ma_enum_devices_callback_proc, __invoke)
{
	zval *zctx = NULL, *zinfo;
	zend_long type, user;
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zctx, phpma_ce_ma_context)
		Z_PARAM_LONG(type)
		Z_PARAM_OBJECT_OF_CLASS(zinfo, phpma_ce_ma_device_info)
		Z_PARAM_LONG(user)
	ZEND_PARSE_PARAMETERS_END();
	phpma_proc *p = phpma_proc_check(ZEND_THIS, user);
	if (!p) {
		RETURN_THROWS();
	}
	phpma_handle *h = NULL;
	if (zctx && !(h = phpma_handle_arg(zctx, &phpma_kind_ma_context, 1, true))) {
		RETURN_THROWS();
	}
	ma_device_info info;
	phpma_frame f;
	phpma_frame_init(&f);
	memset(&info, 0, sizeof(info));
	if (phpma_from_ma_device_info(Z_OBJ_P(zinfo), &info, &f) == FAILURE) {
		phpma_frame_free(&f);
		RETURN_THROWS();
	}
	ma_bool32 r = ((ma_enum_devices_callback_proc)p->fn)(h ? h->native : NULL, (ma_device_type)type, &info, p->user);
	phpma_frame_free(&f);
	RETURN_BOOL(r);
}

/* ---- resampling backends --------------------------------------------- */

/* A PHP resampler's state: the value its onInit returned, and the frame format it was made for. */
typedef struct {
	zval value;
	ma_format format;
	ma_uint32 channels;
} phpma_rbox;

enum { RS_HEAP, RS_INIT, RS_UNINIT, RS_PROCESS, RS_RATE, RS_INLAT, RS_OUTLAT, RS_REQ, RS_EXP, RS_RESET };
static const char *phpma_rs_keys[] = {
	"pBackendVTable.onGetHeapSize", "pBackendVTable.onInit", "pBackendVTable.onUninit", "pBackendVTable.onProcess",
	"pBackendVTable.onSetRate", "pBackendVTable.onGetInputLatency", "pBackendVTable.onGetOutputLatency",
	"pBackendVTable.onGetRequiredInputFrameCount", "pBackendVTable.onGetExpectedOutputFrameCount", "pBackendVTable.onReset",
};

typedef struct {
	phpma_req r;
	int op;
	phpma_sub *sub;
	const ma_resampler_config *config;
	size_t *pHeap;
	ma_resampling_backend **ppBackend;
	phpma_rbox *box;
	const void *in;
	ma_uint64 *pIn;
	void *out;
	ma_uint64 *pOut;
	ma_uint32 a, b;
	ma_uint64 n;
	ma_uint64 *pN;
	ma_uint64 latency;
	ma_uint64 nin, nout;   /* *pIn and *pOut as miniaudio passed them */
	ma_result result;
} phpma_req_rs;

static void phpma_rs_fallback(phpma_req *r)
{
	phpma_req_rs *q = (phpma_req_rs *)r;
	q->result = MA_ERROR;
	q->latency = 0;
	if (q->op == RS_PROCESS) {
		if (q->pIn) *q->pIn = 0;
		if (q->pOut) *q->pOut = 0;
	}
}

static void phpma_rs_serve(phpma_req *r)
{
	phpma_req_rs *q = (phpma_req_rs *)r;
	zval args[6], ret, a, b;
	uint32_t argc = 2;
	ma_uint32 bpf = q->box ? ma_get_bytes_per_frame(q->box->format, q->box->channels) : 0;
	phpma_rs_fallback(r);
	phpma_sub_user(q->sub, "pBackendUserData", &args[0]);
	if (q->box) {
		ZVAL_COPY(&args[1], &q->box->value);
	} else {
		ZVAL_NULL(&args[1]);
	}
	switch (q->op) {
		case RS_HEAP:
			phpma_to_ma_resampler_config(q->config, &args[1]);
			ZVAL_LONG(&a, 0); phpma_ref_init(&args[2], &a);
			argc = 3;
			break;
		case RS_INIT:
			phpma_to_ma_resampler_config(q->config, &args[1]);
			ZVAL_NULL(&args[2]); /* PHP keeps its state in the value it returns, not in miniaudio's heap */
			ZVAL_NULL(&a); phpma_ref_init(&args[3], &a);
			argc = 4;
			break;
		case RS_UNINIT:
			ZVAL_NULL(&args[2]);
			argc = 3;
			break;
		case RS_PROCESS: {
			ma_uint64 nin = q->nin, nout = q->nout;
			if (q->in) {
				ZVAL_STRINGL(&args[2], (const char *)q->in, (size_t)nin * bpf);
			} else {
				ZVAL_NULL(&args[2]);
			}
			ZVAL_LONG(&a, (zend_long)nin); phpma_ref_init(&args[3], &a);
			zend_string *s = zend_string_alloc((size_t)nout * bpf, 0);
			memset(ZSTR_VAL(s), 0, (size_t)nout * bpf + 1);
			ZVAL_STR(&b, s);
			phpma_ref_init(&args[4], &b);
			zval c;
			ZVAL_LONG(&c, (zend_long)nout); phpma_ref_init(&args[5], &c);
			argc = 6;
			break;
		}
		case RS_RATE:
			ZVAL_LONG(&args[2], q->a);
			ZVAL_LONG(&args[3], q->b);
			argc = 4;
			break;
		case RS_REQ:
		case RS_EXP:
			ZVAL_LONG(&args[2], (zend_long)q->n);
			ZVAL_LONG(&a, 0); phpma_ref_init(&args[3], &a);
			argc = 4;
			break;
		default:
			break;
	}

	if (phpma_call(phpma_sub_slot(q->sub, phpma_rs_keys[q->op]), &ret, argc, args)) {
		if (q->op == RS_INLAT || q->op == RS_OUTLAT) {
			q->latency = (ma_uint64)zval_get_long(&ret);
			zval_ptr_dtor(&ret);
		} else if (q->op == RS_UNINIT) {
			zval_ptr_dtor(&ret);
		} else {
			q->result = phpma_ret_result(&ret, MA_ERROR, phpma_rs_keys[q->op]);
		}
		switch (q->op) {
			case RS_HEAP:
				if (q->pHeap) *q->pHeap = (size_t)zval_get_long(phpma_ref_val(&args[2]));
				break;
			case RS_INIT:
				if (q->result == MA_SUCCESS && q->ppBackend) {
					phpma_rbox *box = emalloc(sizeof(*box));
					ZVAL_COPY(&box->value, phpma_ref_val(&args[3]));
					box->format = q->config->format;
					box->channels = q->config->channels;
					*q->ppBackend = (ma_resampling_backend *)box;
				}
				break;
			case RS_PROCESS: {
				ma_uint64 nin = q->nin, nout = q->nout;
				zend_long ci = zval_get_long(phpma_ref_val(&args[3]));
				zend_long co = zval_get_long(phpma_ref_val(&args[5]));
				ma_uint64 cin = ci < 0 ? 0 : MIN((ma_uint64)ci, nin);
				ma_uint64 cout = co < 0 ? 0 : MIN((ma_uint64)co, nout);
				zval *o = phpma_ref_val(&args[4]);
				if (Z_TYPE_P(o) == IS_STRING && bpf) {
					cout = MIN(cout, (ma_uint64)(Z_STRLEN_P(o) / bpf));
					memcpy(q->out, Z_STRVAL_P(o), (size_t)cout * bpf);
				} else {
					cout = 0;
				}
				if (q->pIn) *q->pIn = cin;
				if (q->pOut) *q->pOut = cout;
				break;
			}
			case RS_REQ:
			case RS_EXP:
				if (q->pN) *q->pN = (ma_uint64)zval_get_long(phpma_ref_val(&args[3]));
				break;
		}
	}
	if (q->op == RS_UNINIT && q->box) {
		zval_ptr_dtor(&q->box->value);
		efree(q->box);
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static ma_result phpma_rs_dispatch(phpma_req_rs *q, void *user, uint32_t deadline)
{
	q->sub = phpma_sub_of(user);
	q->r.serve = phpma_rs_serve;
	q->r.fallback = phpma_rs_fallback;
	q->r.ctx = q->sub ? q->sub->ctx : NULL;
	phpma_dispatch(&q->r, deadline);
	return q->result;
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onGetHeapSize(void *u, const ma_resampler_config *c, size_t *p)
{
	phpma_req_rs q = {.op = RS_HEAP, .config = c, .pHeap = p};
	return phpma_rs_dispatch(&q, u, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onInit(void *u, const ma_resampler_config *c, void *heap, ma_resampling_backend **pp)
{
	(void)heap;
	phpma_req_rs q = {.op = RS_INIT, .config = c, .ppBackend = pp};
	return phpma_rs_dispatch(&q, u, PHPMA_JOB_DEADLINE_MS);
}

void phpma_tramp_ma_resampling_backend_vtable_onUninit(void *u, ma_resampling_backend *b, const ma_allocation_callbacks *a)
{
	(void)a;
	phpma_req_rs q = {.op = RS_UNINIT, .box = (phpma_rbox *)b};
	phpma_rs_dispatch(&q, u, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onProcess(void *u, ma_resampling_backend *b, const void *in, ma_uint64 *pIn, void *out, ma_uint64 *pOut)
{
	phpma_req_rs q = {.op = RS_PROCESS, .box = (phpma_rbox *)b, .in = in, .pIn = pIn, .out = out, .pOut = pOut,
		.nin = pIn ? *pIn : 0, .nout = pOut ? *pOut : 0};
	return phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onSetRate(void *u, ma_resampling_backend *b, ma_uint32 in, ma_uint32 out)
{
	phpma_req_rs q = {.op = RS_RATE, .box = (phpma_rbox *)b, .a = in, .b = out};
	return phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
}

ma_uint64 phpma_tramp_ma_resampling_backend_vtable_onGetInputLatency(void *u, const ma_resampling_backend *b)
{
	phpma_req_rs q = {.op = RS_INLAT, .box = (phpma_rbox *)b};
	phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
	return q.latency;
}

ma_uint64 phpma_tramp_ma_resampling_backend_vtable_onGetOutputLatency(void *u, const ma_resampling_backend *b)
{
	phpma_req_rs q = {.op = RS_OUTLAT, .box = (phpma_rbox *)b};
	phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
	return q.latency;
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onGetRequiredInputFrameCount(void *u, const ma_resampling_backend *b, ma_uint64 n, ma_uint64 *p)
{
	phpma_req_rs q = {.op = RS_REQ, .box = (phpma_rbox *)b, .n = n, .pN = p};
	return phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onGetExpectedOutputFrameCount(void *u, const ma_resampling_backend *b, ma_uint64 n, ma_uint64 *p)
{
	phpma_req_rs q = {.op = RS_EXP, .box = (phpma_rbox *)b, .n = n, .pN = p};
	return phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
}

ma_result phpma_tramp_ma_resampling_backend_vtable_onReset(void *u, ma_resampling_backend *b)
{
	phpma_req_rs q = {.op = RS_RESET, .box = (phpma_rbox *)b};
	return phpma_rs_dispatch(&q, u, PHPMA_AUDIO_DEADLINE_MS);
}

/* ---- decoding backends ----------------------------------------------- */

/*
 * The vtables in one list share one pUserData, so a vtable's identity is the
 * proc miniaudio calls: each list index gets its own set of procs.
 */
#define PHPMA_DECODING_VTABLES 8

enum { DB_INIT, DB_FILE, DB_FILEW, DB_MEMORY, DB_UNINIT };
static const char *phpma_db_names[] = {"onInit", "onInitFile", "onInitFileW", "onInitMemory", "onUninit"};

typedef struct {
	phpma_req r;
	int op;
	uint32_t index;
	phpma_sub *sub;
	ma_read_proc onRead;
	ma_seek_proc onSeek;
	ma_tell_proc onTell;
	void *rst;
	const ma_decoding_backend_config *config;
	const char *path;
	const wchar_t *wpath;
	const void *data;
	size_t size;
	ma_data_source **pp;
	ma_data_source *backend;
	ma_result result;
} phpma_req_db;

static void phpma_db_fallback(phpma_req *r)
{
	phpma_req_db *q = (phpma_req_db *)r;
	q->result = MA_ERROR;
	if (q->pp) *q->pp = NULL;
}

static zval *phpma_db_slot(phpma_req_db *q, const char *name)
{
	char key[96];
	snprintf(key, sizeof(key), "ppCustomBackendVTables.%u.%s", q->index, name);
	zval *v = phpma_sub_slot(q->sub, key);
	if (!v) {
		snprintf(key, sizeof(key), "ppCustomDecodingBackendVTables.%u.%s", q->index, name);
		v = phpma_sub_slot(q->sub, key);
	}
	return v;
}

static void phpma_db_serve(phpma_req *r)
{
	phpma_req_db *q = (phpma_req_db *)r;
	zval args[8], ret, a, procs;
	uint32_t argc = 0;
	phpma_db_fallback(r);
	phpma_sub_user(q->sub, "pCustomBackendUserData", &args[argc]);
	if (Z_TYPE(args[0]) == IS_NULL) {
		phpma_sub_user(q->sub, "pCustomDecodingBackendUserData", &args[0]);
	}
	argc = 1;
	ZVAL_UNDEF(&procs);
	switch (q->op) {
		case DB_INIT:
			array_init(&procs);
			phpma_proc_new(phpma_ce_read_proc, (void *)q->onRead, q->rst, &args[1]);
			phpma_proc_new(phpma_ce_seek_proc, (void *)q->onSeek, q->rst, &args[2]);
			phpma_proc_new(phpma_ce_tell_proc, (void *)q->onTell, q->rst, &args[3]);
			Z_ADDREF(args[1]); add_next_index_zval(&procs, &args[1]);
			Z_ADDREF(args[2]); add_next_index_zval(&procs, &args[2]);
			Z_ADDREF(args[3]); add_next_index_zval(&procs, &args[3]);
			ZVAL_LONG(&args[4], (zend_long)(uintptr_t)q->rst);
			argc = 5;
			break;
		case DB_FILE:
			ZVAL_STRING(&args[1], q->path ? q->path : "");
			argc = 2;
			break;
		case DB_FILEW:
			phpma_wstr_zval(q->wpath, &args[1]);
			argc = 2;
			break;
		case DB_MEMORY:
			ZVAL_STRINGL(&args[1], (const char *)q->data, q->size);
			argc = 2;
			break;
		case DB_UNINIT:
			phpma_obj_zval(q->r.ctx, q->backend, NULL, &args[1]);
			argc = 2;
			break;
	}
	if (q->op != DB_UNINIT) {
		phpma_to_ma_decoding_backend_config(q->config, &args[argc++]);
	}
	ZVAL_NULL(&args[argc++]); /* allocation callbacks: always null here */
	if (q->op != DB_UNINIT) {
		ZVAL_NULL(&a);
		phpma_ref_init(&args[argc++], &a);
	}

	char key[64];
	if (phpma_call(phpma_db_slot(q, phpma_db_names[q->op]), &ret, argc, args)) {
		if (q->op == DB_UNINIT) {
			zval_ptr_dtor(&ret);
		} else {
			q->result = phpma_ret_result(&ret, MA_ERROR, phpma_db_names[q->op]);
			zval *ds = phpma_ref_val(&args[argc - 1]);
			if (q->result == MA_SUCCESS) {
				phpma_handle *h = NULL;
				void *native = NULL;
				if (Z_TYPE_P(ds) == IS_OBJECT && instanceof_function(Z_OBJCE_P(ds), phpma_ce_ma_data_source)) {
					native = phpma_iface_native(ds, phpma_ce_ma_data_source, 8, &h);
				}
				if (!native) {
					if (!EG(exception)) {
						zend_type_error("%s must set $ppBackend to an initialized ma_data_source", phpma_db_names[q->op]);
					}
					q->result = MA_ERROR;
				} else {
					*q->pp = native;
					/* the backend object and its procs live until onUninit */
					snprintf(key, sizeof(key), "decoding.backend.%p", native);
					phpma_ctx_set(q->sub->ctx, key, ds);
					if (Z_TYPE(procs) == IS_ARRAY) {
						snprintf(key, sizeof(key), "decoding.procs.%p", native);
						phpma_ctx_set(q->sub->ctx, key, &procs);
					}
				}
			}
		}
	}
	if (q->op == DB_INIT && (q->result != MA_SUCCESS || !*q->pp)) {
		zval *p;
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL(procs), p) {
			phpma_proc_invalidate(p);
		} ZEND_HASH_FOREACH_END();
	}
	if (q->op == DB_UNINIT && q->r.ctx) {
		snprintf(key, sizeof(key), "decoding.procs.%p", (void *)q->backend);
		zval *list = phpma_ctx_slot(q->r.ctx, key);
		if (list && Z_TYPE_P(list) == IS_ARRAY) {
			zval *p;
			ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(list), p) {
				phpma_proc_invalidate(p);
			} ZEND_HASH_FOREACH_END();
		}
		phpma_ctx_set(q->r.ctx, key, NULL);
		snprintf(key, sizeof(key), "decoding.backend.%p", (void *)q->backend);
		phpma_ctx_set(q->r.ctx, key, NULL);
	}
	zval_ptr_dtor(&procs);
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static ma_result phpma_db_dispatch(phpma_req_db *q, void *user)
{
	q->sub = phpma_sub_of(user);
	q->r.serve = phpma_db_serve;
	q->r.fallback = phpma_db_fallback;
	q->r.ctx = q->sub ? q->sub->ctx : NULL;
	phpma_dispatch(&q->r, PHPMA_JOB_DEADLINE_MS);
	return q->result;
}

#define PHPMA_DB_SET(i) \
	static ma_result phpma_db_init_##i(void *u, ma_read_proc r, ma_seek_proc s, ma_tell_proc t, void *rst, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp) \
	{ (void)a; phpma_req_db q = {.op = DB_INIT, .index = i, .onRead = r, .onSeek = s, .onTell = t, .rst = rst, .config = c, .pp = pp}; return phpma_db_dispatch(&q, u); } \
	static ma_result phpma_db_file_##i(void *u, const char *path, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp) \
	{ (void)a; phpma_req_db q = {.op = DB_FILE, .index = i, .path = path, .config = c, .pp = pp}; return phpma_db_dispatch(&q, u); } \
	static ma_result phpma_db_filew_##i(void *u, const wchar_t *path, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp) \
	{ (void)a; phpma_req_db q = {.op = DB_FILEW, .index = i, .wpath = path, .config = c, .pp = pp}; return phpma_db_dispatch(&q, u); } \
	static ma_result phpma_db_memory_##i(void *u, const void *d, size_t n, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp) \
	{ (void)a; phpma_req_db q = {.op = DB_MEMORY, .index = i, .data = d, .size = n, .config = c, .pp = pp}; return phpma_db_dispatch(&q, u); } \
	static void phpma_db_uninit_##i(void *u, ma_data_source *b, const ma_allocation_callbacks *a) \
	{ (void)a; phpma_req_db q = {.op = DB_UNINIT, .index = i, .backend = b}; phpma_db_dispatch(&q, u); }

PHPMA_DB_SET(0) PHPMA_DB_SET(1) PHPMA_DB_SET(2) PHPMA_DB_SET(3)
PHPMA_DB_SET(4) PHPMA_DB_SET(5) PHPMA_DB_SET(6) PHPMA_DB_SET(7)

#define PHPMA_DB_ROW(i) {phpma_db_init_##i, phpma_db_file_##i, phpma_db_filew_##i, phpma_db_memory_##i, phpma_db_uninit_##i}

static const struct {
	ma_result (*onInit)(void *, ma_read_proc, ma_seek_proc, ma_tell_proc, void *, const ma_decoding_backend_config *, const ma_allocation_callbacks *, ma_data_source **);
	ma_result (*onInitFile)(void *, const char *, const ma_decoding_backend_config *, const ma_allocation_callbacks *, ma_data_source **);
	ma_result (*onInitFileW)(void *, const wchar_t *, const ma_decoding_backend_config *, const ma_allocation_callbacks *, ma_data_source **);
	ma_result (*onInitMemory)(void *, const void *, size_t, const ma_decoding_backend_config *, const ma_allocation_callbacks *, ma_data_source **);
	void (*onUninit)(void *, ma_data_source *, const ma_allocation_callbacks *);
} phpma_db_sets[PHPMA_DECODING_VTABLES] = {
	PHPMA_DB_ROW(0), PHPMA_DB_ROW(1), PHPMA_DB_ROW(2), PHPMA_DB_ROW(3),
	PHPMA_DB_ROW(4), PHPMA_DB_ROW(5), PHPMA_DB_ROW(6), PHPMA_DB_ROW(7),
};

/* The generated conversion set index 0's procs; move list entry `index` onto its own set. */
zend_result phpma_decoding_vtable_index(ma_decoding_backend_vtable *vt, uint32_t index)
{
	if (index >= PHPMA_DECODING_VTABLES) {
		zend_value_error("at most %d custom decoding backends are bound per list", PHPMA_DECODING_VTABLES);
		return FAILURE;
	}
	if (vt->onInit) vt->onInit = phpma_db_sets[index].onInit;
	if (vt->onInitFile) vt->onInitFile = phpma_db_sets[index].onInitFile;
	if (vt->onInitFileW) vt->onInitFileW = phpma_db_sets[index].onInitFileW;
	if (vt->onInitMemory) vt->onInitMemory = phpma_db_sets[index].onInitMemory;
	if (vt->onUninit) vt->onUninit = phpma_db_sets[index].onUninit;
	return SUCCESS;
}

ma_result phpma_tramp_ma_decoding_backend_vtable_onInit(void *u, ma_read_proc r, ma_seek_proc s, ma_tell_proc t, void *rst, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp)
{
	return phpma_db_init_0(u, r, s, t, rst, c, a, pp);
}

ma_result phpma_tramp_ma_decoding_backend_vtable_onInitFile(void *u, const char *p, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp)
{
	return phpma_db_file_0(u, p, c, a, pp);
}

ma_result phpma_tramp_ma_decoding_backend_vtable_onInitFileW(void *u, const wchar_t *p, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp)
{
	return phpma_db_filew_0(u, p, c, a, pp);
}

ma_result phpma_tramp_ma_decoding_backend_vtable_onInitMemory(void *u, const void *d, size_t n, const ma_decoding_backend_config *c, const ma_allocation_callbacks *a, ma_data_source **pp)
{
	return phpma_db_memory_0(u, d, n, c, a, pp);
}

void phpma_tramp_ma_decoding_backend_vtable_onUninit(void *u, ma_data_source *b, const ma_allocation_callbacks *a)
{
	phpma_db_uninit_0(u, b, a);
}

/* ---- custom device backends ------------------------------------------ */

enum {
	BK_CTX_INIT, BK_CTX_UNINIT, BK_ENUM, BK_CTX_INFO, BK_DEV_INIT, BK_DEV_UNINIT, BK_START, BK_STOP,
	BK_READ, BK_WRITE, BK_LOOP, BK_WAKEUP, BK_DEV_INFO,
};
static const char *phpma_bk_names[] = {
	"onContextInit", "onContextUninit", "onContextEnumerateDevices", "onContextGetDeviceInfo", "onDeviceInit",
	"onDeviceUninit", "onDeviceStart", "onDeviceStop", "onDeviceRead", "onDeviceWrite", "onDeviceDataLoop",
	"onDeviceDataLoopWakeup", "onDeviceGetInfo",
};

typedef struct {
	phpma_req r;
	int op;
	ma_context *context;
	ma_device *device;
	const ma_context_config *ctxConfig;
	ma_backend_callbacks *callbacks;
	ma_enum_devices_callback_proc enumCb;
	void *enumUser;
	ma_device_type type;
	const ma_device_id *id;
	ma_device_info *info;
	const ma_device_config *devConfig;
	ma_device_descriptor *descPlayback, *descCapture;
	void *frames;
	const void *cframes;
	ma_uint32 count;
	ma_uint32 *pCount;
	ma_result result;
} phpma_req_bk;

static void phpma_bk_fallback(phpma_req *r)
{
	phpma_req_bk *q = (phpma_req_bk *)r;
	q->result = MA_ERROR;
	if (q->pCount) *q->pCount = 0;
}

/* Closures a context's onContextInit put in $pCallbacks, else those its config's `custom` held. */
static zval *phpma_bk_slot(phpma_ctx *ctx, int op)
{
	char key[64];
	snprintf(key, sizeof(key), "backend.%s", phpma_bk_names[op]);
	zval *v = phpma_ctx_slot(ctx, key);
	if (!v) {
		snprintf(key, sizeof(key), "custom.%s", phpma_bk_names[op]);
		v = phpma_ctx_slot(ctx, key);
	}
	return v;
}

static void phpma_bk_install(phpma_ctx *ctx, zend_object *cbs, ma_backend_callbacks *out);

static void phpma_bk_serve(phpma_req *r)
{
	phpma_req_bk *q = (phpma_req_bk *)r;
	phpma_ctx *ctx = q->r.ctx;
	zval args[4], ret, a;
	uint32_t argc = 1;
	ma_uint32 bpf = 0;
	phpma_bk_fallback(r);
	if (q->op <= BK_CTX_INFO) {
		phpma_obj_zval(ctx, q->context, &phpma_kind_ma_context, &args[0]);
	} else {
		phpma_obj_zval(ctx, q->device, &phpma_kind_ma_device, &args[0]);
	}
	switch (q->op) {
		case BK_CTX_INIT:
			phpma_to_ma_context_config(q->ctxConfig, &args[1]);
			phpma_to_ma_backend_callbacks(q->callbacks, &args[2]);
			argc = 3;
			break;
		case BK_ENUM:
			phpma_proc_new(phpma_ce_enum_proc, (void *)q->enumCb, q->enumUser, &args[1]);
			ZVAL_LONG(&args[2], (zend_long)(uintptr_t)q->enumUser);
			argc = 3;
			break;
		case BK_CTX_INFO:
			ZVAL_LONG(&args[1], q->type);
			if (q->id) {
				phpma_to_ma_device_id(q->id, &args[2]);
			} else {
				ZVAL_NULL(&args[2]);
			}
			phpma_to_ma_device_info(q->info, &args[3]);
			argc = 4;
			break;
		case BK_DEV_INIT:
			phpma_to_ma_device_config(q->devConfig, &args[1]);
			phpma_to_ma_device_descriptor(q->descPlayback, &args[2]);
			phpma_to_ma_device_descriptor(q->descCapture, &args[3]);
			argc = 4;
			break;
		case BK_READ: {
			bpf = ma_get_bytes_per_frame(q->device->capture.internalFormat, q->device->capture.internalChannels);
			zend_string *s = zend_string_alloc((size_t)q->count * bpf, 0);
			memset(ZSTR_VAL(s), 0, (size_t)q->count * bpf + 1);
			ZVAL_STR(&a, s);
			phpma_ref_init(&args[1], &a);
			ZVAL_LONG(&args[2], q->count);
			zval c;
			ZVAL_LONG(&c, 0); phpma_ref_init(&args[3], &c);
			argc = 4;
			break;
		}
		case BK_WRITE:
			bpf = ma_get_bytes_per_frame(q->device->playback.internalFormat, q->device->playback.internalChannels);
			ZVAL_STRINGL(&args[1], (const char *)q->cframes, (size_t)q->count * bpf);
			ZVAL_LONG(&args[2], q->count);
			ZVAL_LONG(&a, 0); phpma_ref_init(&args[3], &a);
			argc = 4;
			break;
		case BK_DEV_INFO:
			ZVAL_LONG(&args[1], q->type);
			phpma_to_ma_device_info(q->info, &args[2]);
			argc = 3;
			break;
		default:
			break;
	}

	if (phpma_call(phpma_bk_slot(ctx, q->op), &ret, argc, args)) {
		q->result = phpma_ret_result(&ret, MA_ERROR, phpma_bk_names[q->op]);
		phpma_frame f;
		phpma_frame_init(&f);
		switch (q->op) {
			case BK_CTX_INIT:
				if (q->result == MA_SUCCESS) {
					phpma_bk_install(ctx, Z_OBJ(args[2]), q->callbacks);
				}
				break;
			case BK_CTX_INFO:
			case BK_DEV_INFO: {
				zval *iv = &args[q->op == BK_CTX_INFO ? 3 : 2];
				if (phpma_from_ma_device_info(Z_OBJ_P(iv), q->info, &f) == FAILURE) q->result = MA_ERROR;
				break;
			}
			case BK_DEV_INIT:
				if (phpma_from_ma_device_descriptor(Z_OBJ(args[2]), q->descPlayback, &f) == FAILURE
						|| phpma_from_ma_device_descriptor(Z_OBJ(args[3]), q->descCapture, &f) == FAILURE) {
					q->result = MA_ERROR;
				}
				/* the descriptors' pDeviceID pointed at miniaudio's ids; the frame's copies die below */
				q->descPlayback->pDeviceID = NULL;
				q->descCapture->pDeviceID = NULL;
				break;
			case BK_READ: {
				zval *o = phpma_ref_val(&args[1]);
				zend_long got = zval_get_long(phpma_ref_val(&args[3]));
				ma_uint32 n = got < 0 ? 0 : MIN((ma_uint32)got, q->count);
				if (Z_TYPE_P(o) == IS_STRING && bpf) {
					n = MIN(n, (ma_uint32)(Z_STRLEN_P(o) / bpf));
					memcpy(q->frames, Z_STRVAL_P(o), (size_t)n * bpf);
				} else {
					n = 0;
				}
				if (q->pCount) *q->pCount = n;
				break;
			}
			case BK_WRITE: {
				zend_long w = zval_get_long(phpma_ref_val(&args[3]));
				if (q->pCount) *q->pCount = w < 0 ? 0 : MIN((ma_uint32)w, q->count);
				break;
			}
		}
		phpma_frame_free(&f);
	}
	if (q->op == BK_ENUM) {
		phpma_proc_invalidate(&args[1]);
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static ma_result phpma_bk_dispatch(phpma_req_bk *q, uint32_t deadline)
{
	void *key = q->context ? (void *)q->context : (q->device ? (void *)q->device->pContext : NULL);
	q->r.serve = phpma_bk_serve;
	q->r.fallback = phpma_bk_fallback;
	q->r.ctx = phpma_ctx_find(key);
	phpma_dispatch(&q->r, deadline);
	return q->result;
}

ma_result phpma_tramp_ma_backend_callbacks_onContextInit(ma_context *c, const ma_context_config *cfg, ma_backend_callbacks *cbs)
{
	phpma_req_bk q = {.op = BK_CTX_INIT, .context = c, .ctxConfig = cfg, .callbacks = cbs};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_backend_callbacks_onContextUninit(ma_context *c)
{
	phpma_req_bk q = {.op = BK_CTX_UNINIT, .context = c};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_backend_callbacks_onContextEnumerateDevices(ma_context *c, ma_enum_devices_callback_proc cb, void *u)
{
	phpma_req_bk q = {.op = BK_ENUM, .context = c, .enumCb = cb, .enumUser = u};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_backend_callbacks_onContextGetDeviceInfo(ma_context *c, ma_device_type t, const ma_device_id *id, ma_device_info *info)
{
	phpma_req_bk q = {.op = BK_CTX_INFO, .context = c, .type = t, .id = id, .info = info};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

ma_result phpma_tramp_ma_backend_callbacks_onDeviceInit(ma_device *d, const ma_device_config *cfg, ma_device_descriptor *p, ma_device_descriptor *c)
{
	phpma_req_bk q = {.op = BK_DEV_INIT, .device = d, .devConfig = cfg, .descPlayback = p, .descCapture = c};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

#define PHPMA_BK_DEVICE(name, which, deadline) \
	ma_result phpma_tramp_ma_backend_callbacks_##name(ma_device *d) \
	{ phpma_req_bk q = {.op = which, .device = d}; return phpma_bk_dispatch(&q, deadline); }

PHPMA_BK_DEVICE(onDeviceUninit, BK_DEV_UNINIT, PHPMA_JOB_DEADLINE_MS)
PHPMA_BK_DEVICE(onDeviceStart, BK_START, PHPMA_JOB_DEADLINE_MS)
PHPMA_BK_DEVICE(onDeviceStop, BK_STOP, PHPMA_JOB_DEADLINE_MS)
PHPMA_BK_DEVICE(onDeviceDataLoop, BK_LOOP, PHPMA_JOB_DEADLINE_MS)
PHPMA_BK_DEVICE(onDeviceDataLoopWakeup, BK_WAKEUP, PHPMA_JOB_DEADLINE_MS)

ma_result phpma_tramp_ma_backend_callbacks_onDeviceRead(ma_device *d, void *frames, ma_uint32 count, ma_uint32 *pRead)
{
	phpma_req_bk q = {.op = BK_READ, .device = d, .frames = frames, .count = count, .pCount = pRead};
	return phpma_bk_dispatch(&q, phpma_frames_ms(count, d->sampleRate));
}

ma_result phpma_tramp_ma_backend_callbacks_onDeviceWrite(ma_device *d, const void *frames, ma_uint32 count, ma_uint32 *pWritten)
{
	phpma_req_bk q = {.op = BK_WRITE, .device = d, .cframes = frames, .count = count, .pCount = pWritten};
	return phpma_bk_dispatch(&q, phpma_frames_ms(count, d->sampleRate));
}

ma_result phpma_tramp_ma_backend_callbacks_onDeviceGetInfo(ma_device *d, ma_device_type t, ma_device_info *info)
{
	phpma_req_bk q = {.op = BK_DEV_INFO, .device = d, .type = t, .info = info};
	return phpma_bk_dispatch(&q, PHPMA_JOB_DEADLINE_MS);
}

typedef ma_result (*phpma_bk_any)(void);
static const phpma_bk_any phpma_bk_tramps[] = {
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onContextInit, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onContextUninit,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onContextEnumerateDevices, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onContextGetDeviceInfo,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceInit, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceUninit,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceStart, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceStop,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceRead, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceWrite,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceDataLoop, (phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceDataLoopWakeup,
	(phpma_bk_any)phpma_tramp_ma_backend_callbacks_onDeviceGetInfo,
};

/* After onContextInit: what PHP put in $pCallbacks becomes the context's backend. */
static void phpma_bk_install(phpma_ctx *ctx, zend_object *cbs, ma_backend_callbacks *out)
{
	void **slots[] = {
		(void **)&out->onContextInit, (void **)&out->onContextUninit, (void **)&out->onContextEnumerateDevices,
		(void **)&out->onContextGetDeviceInfo, (void **)&out->onDeviceInit, (void **)&out->onDeviceUninit,
		(void **)&out->onDeviceStart, (void **)&out->onDeviceStop, (void **)&out->onDeviceRead,
		(void **)&out->onDeviceWrite, (void **)&out->onDeviceDataLoop, (void **)&out->onDeviceDataLoopWakeup,
		(void **)&out->onDeviceGetInfo,
	};
	for (int i = 0; i < 13; i++) {
		zend_property_info *info = zend_hash_str_find_ptr(&cbs->ce->properties_info, phpma_bk_names[i], strlen(phpma_bk_names[i]));
		zval *v = info ? OBJ_PROP(cbs, info->offset) : NULL;
		char key[64];
		snprintf(key, sizeof(key), "backend.%s", phpma_bk_names[i]);
		if (v && Z_TYPE_P(v) != IS_NULL) {
			phpma_ctx_set(ctx, key, v);
			*slots[i] = (void *)phpma_bk_tramps[i];
		} else {
			phpma_ctx_set(ctx, key, NULL);
			*slots[i] = NULL;
		}
	}
}

/* ---- custom jobs ----------------------------------------------------- */

/*
 * ma_job_data_custom.proc is a C function pointer and the job carries no user
 * pointer of its own, so each distinct PHP callable gets one of a fixed set of
 * procs, held until the request that bound it ends.
 */
#define PHPMA_JOB_PROCS 64

typedef struct {
	bool used;
	phpma_ctx ctx;   /* queue of the PHP thread that bound it */
	zval callable;   /* touched only on that thread */
} phpma_job_slot;

static phpma_job_slot phpma_job_slots[PHPMA_JOB_PROCS];
static pthread_mutex_t phpma_job_lock = PTHREAD_MUTEX_INITIALIZER;

typedef struct {
	phpma_req r;
	ma_job *job;
	ma_result result;
} phpma_req_job;

static void phpma_job_fallback(phpma_req *r)
{
	((phpma_req_job *)r)->result = MA_ERROR;
}

static int phpma_job_slot_of(phpma_req *r)
{
	return (int)(((char *)r->ctx - (char *)&phpma_job_slots[0].ctx) / (ptrdiff_t)sizeof(phpma_job_slot));
}

static void phpma_job_serve(phpma_req *r)
{
	phpma_req_job *q = (phpma_req_job *)r;
	zval arg, ret;
	q->result = MA_ERROR;
	phpma_to_ma_job(q->job, &arg);
	if (phpma_call(&phpma_job_slots[phpma_job_slot_of(r)].callable, &ret, 1, &arg)) {
		q->result = phpma_ret_result(&ret, MA_ERROR, "ma_job_data_custom::$proc");
	}
	zval_ptr_dtor(&arg);
}

static ma_result phpma_job_run(int i, ma_job *job)
{
	phpma_req_job q = {{phpma_job_serve, phpma_job_fallback, &phpma_job_slots[i].ctx}, job, MA_ERROR};
	if (!phpma_job_slots[i].used) {
		return MA_ERROR;
	}
	phpma_dispatch(&q.r, PHPMA_JOB_DEADLINE_MS);
	return q.result;
}

#define PHPMA_JOB_PROC(b, k) static ma_result phpma_job_proc_##b##_##k(ma_job *j) { return phpma_job_run((b) * 8 + (k), j); }
#define PHPMA_JOB_PROC8(b) PHPMA_JOB_PROC(b, 0) PHPMA_JOB_PROC(b, 1) PHPMA_JOB_PROC(b, 2) PHPMA_JOB_PROC(b, 3) \
	PHPMA_JOB_PROC(b, 4) PHPMA_JOB_PROC(b, 5) PHPMA_JOB_PROC(b, 6) PHPMA_JOB_PROC(b, 7)
PHPMA_JOB_PROC8(0) PHPMA_JOB_PROC8(1) PHPMA_JOB_PROC8(2) PHPMA_JOB_PROC8(3)
PHPMA_JOB_PROC8(4) PHPMA_JOB_PROC8(5) PHPMA_JOB_PROC8(6) PHPMA_JOB_PROC8(7)

#define PHPMA_JOB_ROW(b) phpma_job_proc_##b##_0, phpma_job_proc_##b##_1, phpma_job_proc_##b##_2, phpma_job_proc_##b##_3, \
	phpma_job_proc_##b##_4, phpma_job_proc_##b##_5, phpma_job_proc_##b##_6, phpma_job_proc_##b##_7
static const ma_job_proc phpma_job_procs[PHPMA_JOB_PROCS] = {
	PHPMA_JOB_ROW(0), PHPMA_JOB_ROW(1), PHPMA_JOB_ROW(2), PHPMA_JOB_ROW(3),
	PHPMA_JOB_ROW(4), PHPMA_JOB_ROW(5), PHPMA_JOB_ROW(6), PHPMA_JOB_ROW(7),
};

ma_job_proc phpma_job_proc_for(zval *callable)
{
	phpma_queue *q = PHPMA_G(queue);
	int free_slot = -1;
	pthread_mutex_lock(&phpma_job_lock);
	for (int i = 0; i < PHPMA_JOB_PROCS; i++) {
		phpma_job_slot *s = &phpma_job_slots[i];
		if (s->used && s->ctx.queue == q && zend_is_identical(&s->callable, callable)) {
			pthread_mutex_unlock(&phpma_job_lock);
			return phpma_job_procs[i];
		}
		if (!s->used && free_slot < 0) {
			free_slot = i;
		}
	}
	if (free_slot < 0) {
		pthread_mutex_unlock(&phpma_job_lock);
		zend_value_error("ma_job_data_custom::$proc: at most %d distinct job callables can be bound at once", PHPMA_JOB_PROCS);
		return NULL;
	}
	phpma_job_slot *s = &phpma_job_slots[free_slot];
	memset(&s->ctx, 0, sizeof(s->ctx));
	s->ctx.magic = PHPMA_CTX_MAGIC;
	s->ctx.queue = q;
	ZVAL_COPY(&s->callable, callable);
	s->used = true;
	pthread_mutex_unlock(&phpma_job_lock);
	return phpma_job_procs[free_slot];
}

void phpma_job_proc_zval(ma_job_proc proc, zval *out)
{
	ZVAL_NULL(out);
	for (int i = 0; i < PHPMA_JOB_PROCS; i++) {
		if (phpma_job_procs[i] == proc && phpma_job_slots[i].used && phpma_job_slots[i].ctx.queue == PHPMA_G(queue)) {
			ZVAL_COPY(out, &phpma_job_slots[i].callable);
			return;
		}
	}
}

/* ---- job data -------------------------------------------------------- */

zend_result phpma_from_job_data(zend_object *data, ma_uint16 code, __typeof__(((ma_job *)0)->data) *out, phpma_frame *f)
{
	memset(out, 0, sizeof(*out));
	zval *custom = OBJ_PROP_NUM(data, 0), *rm = OBJ_PROP_NUM(data, 1), *device = OBJ_PROP_NUM(data, 2);
	if (code == MA_JOB_TYPE_CUSTOM) {
		return phpma_from_ma_job_data_custom(Z_OBJ_P(custom), &out->custom, f);
	}
	if (code >= MA_JOB_TYPE_RESOURCE_MANAGER_LOAD_DATA_BUFFER_NODE && code <= MA_JOB_TYPE_RESOURCE_MANAGER_SEEK_DATA_STREAM) {
		/* the resource manager union's members are in job-type order */
		zval *member = OBJ_PROP_NUM(Z_OBJ_P(rm), code - MA_JOB_TYPE_RESOURCE_MANAGER_LOAD_DATA_BUFFER_NODE);
		zend_object *mo = Z_OBJ_P(member);
		switch (code) {
			case MA_JOB_TYPE_RESOURCE_MANAGER_LOAD_DATA_BUFFER_NODE: return phpma_from_ma_job_data_resourceManager_loadDataBufferNode(mo, &out->resourceManager.loadDataBufferNode, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_FREE_DATA_BUFFER_NODE: return phpma_from_ma_job_data_resourceManager_freeDataBufferNode(mo, &out->resourceManager.freeDataBufferNode, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_PAGE_DATA_BUFFER_NODE: return phpma_from_ma_job_data_resourceManager_pageDataBufferNode(mo, &out->resourceManager.pageDataBufferNode, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_LOAD_DATA_BUFFER: return phpma_from_ma_job_data_resourceManager_loadDataBuffer(mo, &out->resourceManager.loadDataBuffer, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_FREE_DATA_BUFFER: return phpma_from_ma_job_data_resourceManager_freeDataBuffer(mo, &out->resourceManager.freeDataBuffer, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_LOAD_DATA_STREAM: return phpma_from_ma_job_data_resourceManager_loadDataStream(mo, &out->resourceManager.loadDataStream, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_FREE_DATA_STREAM: return phpma_from_ma_job_data_resourceManager_freeDataStream(mo, &out->resourceManager.freeDataStream, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_PAGE_DATA_STREAM: return phpma_from_ma_job_data_resourceManager_pageDataStream(mo, &out->resourceManager.pageDataStream, f);
			case MA_JOB_TYPE_RESOURCE_MANAGER_SEEK_DATA_STREAM: return phpma_from_ma_job_data_resourceManager_seekDataStream(mo, &out->resourceManager.seekDataStream, f);
		}
	}
	if (code == MA_JOB_TYPE_DEVICE_AAUDIO_REROUTE) {
		zval *aaudio = OBJ_PROP_NUM(Z_OBJ_P(device), 0);
		return phpma_from_ma_job_data_device_aaudio_reroute(Z_OBJ_P(OBJ_PROP_NUM(Z_OBJ_P(aaudio), 0)), &out->device.aaudio.reroute, f);
	}
	return SUCCESS; /* MA_JOB_TYPE_QUIT and unknown codes carry no data */
}

/* ---- pointers inside jobs -------------------------------------------- */

void phpma_rawptr_zval(void *p, zval *out)
{
	if (p) {
		zend_hash_index_add_empty_element(&PHPMA_G(rawptrs), (zend_ulong)(uintptr_t)p);
	}
	ZVAL_LONG(out, (zend_long)(uintptr_t)p);
}

zend_result phpma_rawptr(zval *zv, void **out, const char *what)
{
	zend_long v = zval_get_long(zv);
	if (v != 0 && !zend_hash_index_exists(&PHPMA_G(rawptrs), (zend_ulong)v)) {
		zend_value_error("%s must be 0 or a value miniaudio handed out in a job", what);
		return FAILURE;
	}
	*out = (void *)(uintptr_t)v;
	return SUCCESS;
}

/* ---- lifecycle ------------------------------------------------------- */

void phpma_backends_rshutdown(void)
{
	phpma_queue *q = PHPMA_G(queue);
	pthread_mutex_lock(&phpma_job_lock);
	for (int i = 0; i < PHPMA_JOB_PROCS; i++) {
		phpma_job_slot *s = &phpma_job_slots[i];
		if (s->used && s->ctx.queue == q) {
			s->used = false;
			zval_ptr_dtor(&s->callable);
			ZVAL_UNDEF(&s->callable);
		}
	}
	pthread_mutex_unlock(&phpma_job_lock);
}

void phpma_backends_minit(void)
{
	memcpy(&phpma_proc_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
	phpma_proc_handlers.offset = XtOffsetOf(phpma_proc, std);
	phpma_proc_handlers.clone_obj = NULL;
	phpma_ce_read_proc = register_class_ma_read_proc();
	phpma_ce_seek_proc = register_class_ma_seek_proc();
	phpma_ce_tell_proc = register_class_ma_tell_proc();
	phpma_ce_enum_proc = register_class_ma_enum_devices_callback_proc();
	phpma_ce_read_proc->create_object = phpma_proc_create;
	phpma_ce_seek_proc->create_object = phpma_proc_create;
	phpma_ce_tell_proc->create_object = phpma_proc_create;
	phpma_ce_enum_proc->create_object = phpma_proc_create;
}
