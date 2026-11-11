#ifndef PHPMA_CALLBACKS_H
#define PHPMA_CALLBACKS_H

#include "runtime.h"
#include <pthread.h>

/*
 * Callbacks. miniaudio calls back on its own threads (device audio thread, job
 * threads) and, synchronously, on the thread that called into it. A thread
 * that is not the owning PHP thread never enters PHP: it posts a request to
 * the owner's queue, raises the owner's vm_interrupt, and waits until the
 * owner has served it or its deadline passes (then it applies the callback's
 * no-op result). The owner serves the queue from zend_interrupt_function and
 * while a blocking miniaudio call runs on a helper thread.
 */

typedef struct phpma_queue phpma_queue;

typedef struct phpma_req {
	void (*serve)(struct phpma_req *r);    /* owner thread: build zvals, call PHP, write results */
	void (*fallback)(struct phpma_req *r); /* any thread: the no-op result */
	struct phpma_ctx *ctx;
	struct phpma_req *next;
	int state;
	pthread_cond_t done;
} phpma_req;

/* Everything one target handle's callbacks need: its closures and user data by key. */
typedef struct phpma_ctx {
	uint32_t magic;
	phpma_queue *queue;
	HashTable slots;          /* key -> zval; touched only on the owner thread */
	void *native;             /* map key: the handle's C struct, or NULL for an unmapped context */
	zend_object *owner;       /* the handle object (not counted: the context dies with its uninit) */
	struct phpma_sub *subs;   /* user-data pointers handed to miniaudio, freed with the context */
} phpma_ctx;

#define PHPMA_CTX_MAGIC 0x6d616378u

void phpma_callbacks_minit(void);
void phpma_callbacks_rinit(void);
void phpma_callbacks_rshutdown_begin(void);
void phpma_callbacks_rshutdown_end(void);

/*
 * What miniaudio holds as a callback's user data: the context plus the struct
 * path the callback's closures are keyed under ("pitchResampling."), so two
 * copies of one struct inside one config keep their own closures.
 */
typedef struct phpma_sub {
	uint32_t magic;
	phpma_ctx *ctx;
	struct phpma_sub *next;
	char prefix[128];
} phpma_sub;

#define PHPMA_SUB_MAGIC 0x6d617375u

phpma_sub *phpma_ctx_sub(phpma_ctx *ctx, const char *prefix);
/* The sub for a user-data pointer miniaudio handed back; NULL when it is not one of the binding's. */
phpma_sub *phpma_sub_of(void *p);
/* The PHP user data stored under prefix+field for a sub pointer, or null. */
void phpma_sub_user(void *p, const char *field, zval *out);
zval *phpma_sub_slot(phpma_sub *sub, const char *field);

phpma_ctx *phpma_ctx_for(phpma_handle *h);
phpma_ctx *phpma_ctx_find(void *native);
zval *phpma_ctx_slot(phpma_ctx *ctx, const char *key);
void phpma_ctx_set(phpma_ctx *ctx, const char *key, zval *value);

/* The target handle's context for a frame, created on first use; NULL with a ValueError when the frame has none. */
phpma_ctx *phpma_frame_ctx(phpma_frame *f, const char *what);

void phpma_dispatch(phpma_req *r, uint32_t deadline_ms);
/* Runs fn(arg) on a helper thread while this thread serves callbacks, when this thread has any. */
void phpma_run_serving(void (*fn)(void *), void *arg);
void phpma_run_pumping(void (*fn)(void *), void *arg, ma_resource_manager *rm);
/* Calls a PHP callable; the return value is in *ret (UNDEF when the call threw). */
bool phpma_call(zval *callable, zval *ret, uint32_t argc, zval *argv);

/* Native views of value objects used where miniaudio wants a pointer (ma_vfs, ma_async_notification). */
void *phpma_vfs_value_native(zval *zv);
void *phpma_notification_value_native(zval *zv);

/* Helpers shared by the trampolines (callbacks.c, backends.c). */
#define PHPMA_AUDIO_DEADLINE_MS 100
#define PHPMA_JOB_DEADLINE_MS 5000
ma_result phpma_ret_result(zval *ret, ma_result fallback, const char *what);
void phpma_ref_init(zval *ref, zval *value);
zval *phpma_ref_val(zval *ref);
void phpma_obj_zval(phpma_ctx *ctx, void *native, const phpma_kind *kind, zval *out);
void phpma_nop(phpma_req *r);
uint32_t phpma_frames_ms(ma_uint32 frames, ma_uint32 rate);
void phpma_backends_minit(void);
void phpma_backends_rshutdown(void);
zend_result phpma_decoding_vtable_index(ma_decoding_backend_vtable *vt, uint32_t index);
/* ma_job_data_custom.proc: a PHP callable bound to one of a fixed set of C procs */
ma_job_proc phpma_job_proc_for(zval *callable);
void phpma_job_proc_zval(ma_job_proc proc, zval *out);
/* ma_job.data: converts only the member toc.breakup.code selects */
zend_result phpma_from_job_data(zend_object *data, ma_uint16 code, __typeof__(((ma_job *)0)->data) *out, phpma_frame *f);
/* Pointers miniaudio handed out in job structs, accepted back only as they were given */
void phpma_rawptr_zval(void *p, zval *out);
zend_result phpma_rawptr(zval *zv, void **out, const char *what);

#endif
