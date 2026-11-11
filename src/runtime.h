#ifndef PHPMA_RUNTIME_H
#define PHPMA_RUNTIME_H

#include "php.h"
#include "miniaudio.h"

/* Interfaces a handle class implements. */
#define PHPMA_IS_DATA_SOURCE  (1u << 0)
#define PHPMA_IS_NODE         (1u << 1)
#define PHPMA_IS_VFS          (1u << 2)
#define PHPMA_IS_ASYNC_NOTIFY (1u << 3)
/* Owns miniaudio threads (device worker, job threads): unusable in a forked child. */
#define PHPMA_THREADED        (1u << 8)
/* Zeroed storage is already a valid object upstream (ma_spinlock has no init): live from new. */
#define PHPMA_LIVE_FROM_NEW   (1u << 9)

/* A handle's readable C field: what read-only property reads expose. */
enum {
	PHPMA_F_END = 0, PHPMA_F_U8, PHPMA_F_U16, PHPMA_F_U32, PHPMA_F_U64, PHPMA_F_I16, PHPMA_F_I32, PHPMA_F_I64,
	PHPMA_F_B8, PHPMA_F_B32, PHPMA_F_F32, PHPMA_F_F64, PHPMA_F_CSTR, PHPMA_F_HANDLE, PHPMA_F_STRUCT, PHPMA_F_VALUE,
};

typedef struct phpma_field {
	const char *name;
	size_t offset;
	uint8_t type;
	uint8_t elem;                       /* arrays: element type, count in `count` */
	uint32_t count;                     /* 0: not an array; CSTR: buffer size */
	const struct phpma_kind *kind;      /* HANDLE */
	const struct phpma_field *sub;      /* STRUCT */
	void (*to)(const void *, zval *);   /* VALUE */
} phpma_field;

typedef struct phpma_kind {
	const char *name;
	size_t size;
	zend_class_entry **ce;
	/* Called once on a live handle; NULL when upstream has no uninit (ma_fader, ma_gainer …). */
	void (*uninit)(void *native);
	uint32_t interfaces;
	const phpma_field *fields;
} phpma_kind;

enum {
	PHPMA_STORAGE = 0,  /* new ma_x(): uninitialised C storage */
	PHPMA_LIVE = 1,     /* an _init call succeeded */
	PHPMA_BORROWED = 2, /* memory owned by miniaudio or another handle */
};

typedef struct phpma_keep phpma_keep;

typedef struct phpma_handle {
	void *native;
	const phpma_kind *kind;
	uint8_t state;
	void *heap;                      /* _init_preallocated heap, freed after uninit */
	HashTable *retain;               /* keyed zvals kept alive while live (deps, closures, user data) */
	phpma_keep *keep;                /* persistent C memory freed after uninit */
	struct phpma_handle **deps;      /* live handles this one points into */
	uint32_t dep_count;
	uint32_t dependents;             /* live handles pointing into this one */
	struct phpma_handle *prev, *next;/* request live list, creation order */
	void (*uninit_override)(void *); /* replaces kind->uninit (ma_audio_buffer_uninit_and_free) */
	bool foreign;                    /* native allocated by miniaudio: never freed by the binding */
	void *ctx;                       /* phpma_ctx of this handle's callbacks, freed after uninit */
	uint32_t fork_gen;               /* phpma_fork_gen when it became live */
	void *acq_write;                 /* ring buffer write acquisition awaiting commit */
	size_t acq_write_size;
	zval acq_write_ref;              /* the by-reference variable that holds the bytes to commit */
	zend_object std;
} phpma_handle;

static inline phpma_handle *phpma_from_obj(zend_object *obj)
{
	return (phpma_handle *)((char *)obj - XtOffsetOf(phpma_handle, std));
}

#define Z_PHPMA_P(zv) phpma_from_obj(Z_OBJ_P(zv))

/* Persistent C memory a call hands to miniaudio for longer than the call. */
struct phpma_keep {
	phpma_keep *next;
	void (*release)(void *);
	void *ptr;
};

/*
 * One binding call's scratch: temporary C memory, the handles the converted
 * arguments point into, and the zvals and persistent memory the target handle
 * must keep once the call succeeds.
 */
typedef struct phpma_frame {
	void **temp;
	uint32_t temp_count, temp_cap;
	phpma_handle **deps;
	uint32_t dep_count, dep_cap;
	HashTable *retain;
	phpma_keep *keep;
	struct phpma_handle *target;  /* the handle an _init call initializes: owns the callbacks' context */
	char prefix[128];             /* struct path of the field being converted ("vtable.") */
} phpma_frame;

ZEND_BEGIN_MODULE_GLOBALS(miniaudio)
	phpma_handle *live_head;
	phpma_handle *live_tail;
	HashTable registry; /* native pointer -> zend_object*, every handle object of this thread */
	void *queue;        /* phpma_queue of this thread */
	uint32_t ctx_count; /* live callback contexts: 0 means no call needs a helper thread */
	HashTable rawptrs;       /* pointers miniaudio handed out inside jobs, accepted back as given */
	HashTable value_natives; /* zend_object* -> native view of a ma_vfs_callbacks / ma_async_notification_callbacks */
ZEND_END_MODULE_GLOBALS(miniaudio)

ZEND_EXTERN_MODULE_GLOBALS(miniaudio)
#define PHPMA_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(miniaudio, v)

extern zend_class_entry *phpma_ce_ma_data_source;
extern zend_class_entry *phpma_ce_ma_node;
extern zend_class_entry *phpma_ce_ma_vfs;
extern zend_class_entry *phpma_ce_ma_async_notification;

void phpma_frame_init(phpma_frame *f);
void phpma_frame_free(phpma_frame *f);
void *phpma_frame_alloc(phpma_frame *f, size_t size);
void phpma_frame_dep(phpma_frame *f, phpma_handle *h);
zval *phpma_frame_retain(phpma_frame *f, const char *key, zval *value);
void *phpma_frame_keep(phpma_frame *f, size_t size);
/* Moves deps, retained zvals and kept memory onto the handle and marks it live. */
void phpma_frame_commit(phpma_frame *f, phpma_handle *h);
/* Struct path of nested conversions: keys of callbacks and user data in the target's context. */
size_t phpma_frame_push(phpma_frame *f, const char *field);
void phpma_frame_pop(phpma_frame *f, size_t len);
const char *phpma_frame_path(phpma_frame *f, const char *field);

/* Handle classes. */
void phpma_handles_minit(void);
extern volatile uint32_t phpma_fork_gen;
/* A live handle whose threads a fork left behind: Error thrown, true returned. */
bool phpma_handle_forked(phpma_handle *h);
zend_object *phpma_handle_create(zend_class_entry *ce, const phpma_kind *kind);
phpma_handle *phpma_handle_arg(zval *zv, const phpma_kind *kind, uint32_t arg, bool want_live);
phpma_handle *phpma_handle_iface_arg(zval *zv, zend_class_entry *iface, uint32_t arg);
/* The PHP object for a native pointer: this thread's handle, or a borrowed one kept alive by owner. */
void phpma_handle_zval(void *native, const phpma_kind *kind, zend_object *owner, zval *out);
void phpma_handle_retain_set(phpma_handle *h, const char *key, zval *value);
void phpma_handle_uninit(phpma_handle *h);
void phpma_request_shutdown(void);
/* A live handle whose memory now belongs to owner (an appended page): borrowed from here on. */
void phpma_handle_lend(phpma_handle *h, phpma_handle *owner);
void *phpma_vfs_value_native(zval *zv);
void *phpma_notification_value_native(zval *zv);

/* Field and argument conversions. Each returns FAILURE with a ValueError thrown. */
zend_result phpma_int(zval *zv, zend_long min, zend_long max, zend_long *out, const char *what);
zend_result phpma_cstring(zval *zv, char *dst, size_t cap, const char *what);
zend_result phpma_strdup(zval *zv, phpma_frame *f, const char **out, const char *what);
zend_result phpma_wstrdup(zval *zv, phpma_frame *f, const wchar_t **out, const char *what);
void phpma_wstr_zval(const wchar_t *w, zval *out);
zend_result phpma_handle_field(zval *zv, const phpma_kind *kind, phpma_frame *f, void **out, const char *what);
void *phpma_iface_native(zval *zv, zend_class_entry *iface, uint32_t arg, phpma_handle **h);
zend_result phpma_iface_field(zval *zv, zend_class_entry *iface, phpma_frame *f, void **out, const char *what);
zend_result phpma_alloc_callbacks(zval *obj, const char *what);
zend_result phpma_u32_list(zval *zv, phpma_frame *f, uint32_t count, ma_uint32 **out, const char *what);
zend_result phpma_channel_list(zval *zv, phpma_frame *f, ma_uint32 count, ma_channel **out, const char *what);
zend_result phpma_weights(zval *zv, phpma_frame *f, ma_uint32 rows, ma_uint32 cols, float ***out, const char *what);
void phpma_weights_zval(float **in, ma_uint32 rows, ma_uint32 cols, zval *out);
zend_result phpma_mul_size(uint64_t a, uint64_t b, size_t *out);
void *phpma_frame_keep_bytes(phpma_frame *f, const void *src, size_t len);
ma_uint32 phpma_ds_bpf(void *ds);
const char *phpma_frame_key(phpma_frame *f, const char *prefix, const char *name);
ma_uint32 phpma_clip_src_bps(ma_format format);
bool phpma_all_zero(const void *p, size_t size);
void phpma_copy_props(zend_object *dst, zend_object *src);
void phpma_u32_list_zval(const ma_uint32 *in, uint32_t count, zval *out);
void phpma_channel_list_zval(const ma_channel *in, uint32_t count, zval *out);

/* Value struct classes: constructor shared by all, nested-class table per class. */
typedef struct phpma_value_class {
	zend_class_entry **ce;
	uint32_t prop_count;
	zend_class_entry ***nested; /* per property: class to instantiate when the argument is omitted, or NULL */
} phpma_value_class;

void phpma_value_construct(zend_object *obj, const phpma_value_class *vc, zval *args, uint32_t argc);
void phpma_value_new(zend_class_entry *ce, zval *out);

#endif
