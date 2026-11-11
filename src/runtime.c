#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_miniaudio.h"
#include "zend_exceptions.h"
#include "zend_closures.h"
#include "zend_interfaces.h"
#include "zend_smart_str.h"

#include "runtime.h"
#include "callbacks.h"
#include "gen/types.h"

#include <stdlib.h>
#include <wchar.h>

ZEND_DECLARE_MODULE_GLOBALS(miniaudio)

zend_class_entry *phpma_ce_ma_data_source;
zend_class_entry *phpma_ce_ma_node;
zend_class_entry *phpma_ce_ma_vfs;
zend_class_entry *phpma_ce_ma_async_notification;

/* ---- frames ---------------------------------------------------------- */

void phpma_frame_init(phpma_frame *f)
{
	memset(f, 0, sizeof(*f));
}

static void phpma_keep_release_all(phpma_keep *k)
{
	while (k) {
		phpma_keep *next = k->next;
		k->release(k->ptr);
		free(k);
		k = next;
	}
}

void phpma_frame_free(phpma_frame *f)
{
	if (f->target && f->target->state == PHPMA_STORAGE && f->target->keep) {
		/* the _init failed: drop the context made for its callbacks */
		phpma_keep *k = f->target->keep;
		f->target->keep = NULL;
		phpma_keep_release_all(k);
	}
	for (uint32_t i = 0; i < f->temp_count; i++) {
		efree(f->temp[i]);
	}
	if (f->temp) {
		efree(f->temp);
	}
	if (f->deps) {
		efree(f->deps);
	}
	if (f->retain) {
		zend_array_destroy(f->retain);
	}
	phpma_keep_release_all(f->keep);
	memset(f, 0, sizeof(*f));
}

void *phpma_frame_alloc(phpma_frame *f, size_t size)
{
	if (f->temp_count == f->temp_cap) {
		f->temp_cap = f->temp_cap ? f->temp_cap * 2 : 8;
		f->temp = erealloc(f->temp, f->temp_cap * sizeof(void *));
	}
	void *p = ecalloc(1, size ? size : 1);
	f->temp[f->temp_count++] = p;
	return p;
}

void phpma_frame_dep(phpma_frame *f, phpma_handle *h)
{
	for (uint32_t i = 0; i < f->dep_count; i++) {
		if (f->deps[i] == h) {
			return;
		}
	}
	if (f->dep_count == f->dep_cap) {
		f->dep_cap = f->dep_cap ? f->dep_cap * 2 : 4;
		f->deps = erealloc(f->deps, f->dep_cap * sizeof(phpma_handle *));
	}
	f->deps[f->dep_count++] = h;
}

zval *phpma_frame_retain(phpma_frame *f, const char *key, zval *value)
{
	if (!f->retain) {
		f->retain = zend_new_array(4);
	}
	Z_TRY_ADDREF_P(value);
	return zend_hash_str_update(f->retain, key, strlen(key), value);
}

void *phpma_frame_keep(phpma_frame *f, size_t size)
{
	phpma_keep *k = malloc(sizeof(*k));
	void *p = calloc(1, size ? size : 1);
	if (!k || !p) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	k->ptr = p;
	k->release = free;
	k->next = f->keep;
	f->keep = k;
	return p;
}

size_t phpma_frame_push(phpma_frame *f, const char *field)
{
	size_t len = strlen(f->prefix);
	snprintf(f->prefix + len, sizeof(f->prefix) - len, "%s.", field);
	return len;
}

void phpma_frame_pop(phpma_frame *f, size_t len)
{
	f->prefix[len] = '\0';
}

const char *phpma_frame_path(phpma_frame *f, const char *field)
{
	size_t a = strlen(f->prefix), b = strlen(field);
	char *k = phpma_frame_alloc(f, a + b + 1);
	memcpy(k, f->prefix, a);
	memcpy(k + a, field, b);
	return k;
}

/* ---- handles --------------------------------------------------------- */

static zend_object_handlers phpma_handle_handlers;

volatile uint32_t phpma_fork_gen;

bool phpma_handle_forked(phpma_handle *h)
{
	if (h->state == PHPMA_LIVE && (h->kind->interfaces & PHPMA_THREADED) && h->fork_gen != phpma_fork_gen) {
		zend_throw_error(NULL, "%s: its miniaudio threads did not survive fork", h->kind->name);
		return true;
	}
	return false;
}

static void phpma_live_link(phpma_handle *h)
{
	h->prev = PHPMA_G(live_tail);
	h->next = NULL;
	if (PHPMA_G(live_tail)) {
		PHPMA_G(live_tail)->next = h;
	} else {
		PHPMA_G(live_head) = h;
	}
	PHPMA_G(live_tail) = h;
}

static void phpma_live_unlink(phpma_handle *h)
{
	if (h->prev) {
		h->prev->next = h->next;
	} else {
		PHPMA_G(live_head) = h->next;
	}
	if (h->next) {
		h->next->prev = h->prev;
	} else {
		PHPMA_G(live_tail) = h->prev;
	}
	h->prev = h->next = NULL;
}

void phpma_frame_commit(phpma_frame *f, phpma_handle *h)
{
	if (f->dep_count) {
		h->deps = emalloc(f->dep_count * sizeof(phpma_handle *));
		for (uint32_t i = 0; i < f->dep_count; i++) {
			phpma_handle *d = f->deps[i];
			h->deps[i] = d;
			d->dependents++;
			GC_ADDREF(&d->std);
		}
		h->dep_count = f->dep_count;
	}
	if (f->retain) {
		if (!h->retain) {
			h->retain = f->retain;
		} else {
			zend_hash_merge(h->retain, f->retain, zval_add_ref, 1);
			zend_array_destroy(f->retain);
		}
		f->retain = NULL;
	}
	if (f->keep) {
		phpma_keep *tail = f->keep;
		while (tail->next) {
			tail = tail->next;
		}
		tail->next = h->keep;
		h->keep = f->keep;
		f->keep = NULL;
	}
	if (h->state != PHPMA_LIVE) {
		h->state = PHPMA_LIVE;
		h->fork_gen = phpma_fork_gen;
		phpma_live_link(h);
	}
}

static void phpma_registry_add(phpma_handle *h)
{
	zend_hash_index_update_ptr(&PHPMA_G(registry), (zend_ulong)(uintptr_t)h->native, &h->std);
}

zend_object *phpma_handle_create(zend_class_entry *ce, const phpma_kind *kind)
{
	phpma_handle *h = zend_object_alloc(sizeof(phpma_handle), ce);
	memset(h, 0, XtOffsetOf(phpma_handle, std));
	zend_object_std_init(&h->std, ce);
	object_properties_init(&h->std, ce);
	h->std.handlers = &phpma_handle_handlers;
	h->kind = kind;
	/* miniaudio uses 64-bit atomics and SIMD loads inside these structs. */
	if (posix_memalign(&h->native, 64, kind->size) != 0) {
		zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
	}
	memset(h->native, 0, kind->size);
	phpma_registry_add(h);
	if (kind->interfaces & PHPMA_LIVE_FROM_NEW) {
		h->state = PHPMA_LIVE;
		h->fork_gen = phpma_fork_gen;
		phpma_live_link(h);
	}
	return &h->std;
}

static void phpma_release_deps(phpma_handle *h)
{
	for (uint32_t i = 0; i < h->dep_count; i++) {
		h->deps[i]->dependents--;
		OBJ_RELEASE(&h->deps[i]->std);
	}
	if (h->deps) {
		efree(h->deps);
	}
	h->deps = NULL;
	h->dep_count = 0;
}

static void phpma_uninit_dependents_of(phpma_handle *parent)
{
	/* Newest first: a dependent's own dependents were created after it. */
	phpma_handle *h = PHPMA_G(live_tail);
	while (h && parent->dependents) {
		phpma_handle *prev = h->prev;
		for (uint32_t i = 0; i < h->dep_count; i++) {
			if (h->deps[i] == parent) {
				phpma_handle_uninit(h);
				prev = PHPMA_G(live_tail);
				break;
			}
		}
		h = prev;
	}
}

/* The resource manager behind a handle when it has no job threads (its loads wait on the caller). */
static ma_resource_manager *phpma_threadless_rm(phpma_handle *h)
{
	for (uint32_t i = 0; i < h->dep_count; i++) {
		phpma_handle *d = h->deps[i];
		ma_resource_manager *rm = NULL;
		if (d->kind == &phpma_kind_ma_resource_manager) {
			rm = d->native;
		} else if (d->kind == &phpma_kind_ma_engine) {
			rm = ((ma_engine *)d->native)->pResourceManager;
		}
		if (rm && rm->config.jobThreadCount == 0 && !(rm->config.flags & MA_RESOURCE_MANAGER_FLAG_NO_THREADING)) {
			return rm;
		}
	}
	return NULL;
}

void phpma_handle_uninit(phpma_handle *h)
{
	if (h->state != PHPMA_LIVE) {
		return;
	}
	if (h->dependents) {
		phpma_uninit_dependents_of(h);
	}
	/* may wait on a device or job thread that is waiting on one of this thread's callbacks */
	if ((h->kind->interfaces & PHPMA_THREADED) && h->fork_gen != phpma_fork_gen) {
		/* a fork child: the threads uninit would join do not exist here; the C memory stays */
		h->foreign = true;
	} else {
		void (*fn)(void *) = h->uninit_override ? h->uninit_override : h->kind->uninit;
		ma_resource_manager *rm = phpma_threadless_rm(h);
		if (fn && rm) {
			phpma_run_pumping(fn, h->native, rm);
		} else if (fn) {
			phpma_run_serving(fn, h->native);
		}
	}
	zval_ptr_dtor(&h->acq_write_ref);
	ZVAL_UNDEF(&h->acq_write_ref);
	h->acq_write = NULL;
	h->state = PHPMA_STORAGE;
	phpma_live_unlink(h);
	phpma_keep_release_all(h->keep);
	h->keep = NULL;
	if (h->heap) {
		free(h->heap);
		h->heap = NULL;
	}
	if (h->retain) {
		HashTable *r = h->retain;
		h->retain = NULL;
		zend_array_destroy(r);
	}
	if (h->foreign) {
		/* miniaudio freed it: the object is empty storage of nothing until re-made */
		zend_hash_index_del(&PHPMA_G(registry), (zend_ulong)(uintptr_t)h->native);
		h->native = NULL;
		h->foreign = false;
		h->uninit_override = NULL;
	} else {
		memset(h->native, 0, h->kind->size);
	}
	phpma_release_deps(h);
}

static void phpma_handle_free(zend_object *obj)
{
	phpma_handle *h = phpma_from_obj(obj);

	if (h->state == PHPMA_LIVE) {
		phpma_handle_uninit(h);
	} else if (h->state == PHPMA_BORROWED) {
		phpma_release_deps(h);
	}
	zval_ptr_dtor(&h->acq_write_ref);
	if (h->native && h->state != PHPMA_BORROWED && !h->foreign) {
		zend_hash_index_del(&PHPMA_G(registry), (zend_ulong)(uintptr_t)h->native);
		free(h->native);
	}
	h->native = NULL;
	zend_object_std_dtor(obj);
}

static HashTable *phpma_handle_get_gc(zend_object *obj, zval **table, int *n)
{
	phpma_handle *h = phpma_from_obj(obj);
	*table = NULL;
	*n = 0;
	return h->retain;
}

static void phpma_field_zval(const phpma_field *fd, const char *base, phpma_handle *owner, zval *out);

static void phpma_scalar_zval(uint8_t type, const char *p, size_t cap, zval *out)
{
	switch (type) {
		case PHPMA_F_U8: ZVAL_LONG(out, *(const uint8_t *)p); break;
		case PHPMA_F_U16: ZVAL_LONG(out, *(const uint16_t *)p); break;
		case PHPMA_F_U32: ZVAL_LONG(out, *(const uint32_t *)p); break;
		case PHPMA_F_U64: ZVAL_LONG(out, (zend_long)*(const uint64_t *)p); break;
		case PHPMA_F_I16: ZVAL_LONG(out, *(const int16_t *)p); break;
		case PHPMA_F_I32: ZVAL_LONG(out, *(const int32_t *)p); break;
		case PHPMA_F_I64: ZVAL_LONG(out, *(const int64_t *)p); break;
		case PHPMA_F_B8: ZVAL_BOOL(out, *(const uint8_t *)p != 0); break;
		case PHPMA_F_B32: ZVAL_BOOL(out, *(const uint32_t *)p != 0); break;
		case PHPMA_F_F32: ZVAL_DOUBLE(out, *(const float *)p); break;
		case PHPMA_F_F64: ZVAL_DOUBLE(out, *(const double *)p); break;
		case PHPMA_F_CSTR: ZVAL_STRINGL(out, p, strnlen(p, cap)); break;
		default: ZVAL_NULL(out);
	}
}

static size_t phpma_scalar_size(uint8_t type)
{
	switch (type) {
		case PHPMA_F_U8: case PHPMA_F_B8: return 1;
		case PHPMA_F_U16: case PHPMA_F_I16: return 2;
		case PHPMA_F_U64: case PHPMA_F_I64: case PHPMA_F_F64: return 8;
		default: return 4;
	}
}

static void phpma_fields_array(const phpma_field *fields, const char *base, phpma_handle *owner, zval *out)
{
	array_init(out);
	for (const phpma_field *fd = fields; fd->name; fd++) {
		zval v;
		phpma_field_zval(fd, base, owner, &v);
		add_assoc_zval(out, fd->name, &v);
	}
}

static void phpma_field_zval(const phpma_field *fd, const char *base, phpma_handle *owner, zval *out)
{
	const char *p = base + fd->offset;
	switch (fd->type) {
		case PHPMA_F_HANDLE:
			phpma_handle_zval(*(void *const *)p, fd->kind, &owner->std, out);
			return;
		case PHPMA_F_STRUCT:
			/* nested rows hold offsets from the start of the handle's struct, not of the nested one */
			phpma_fields_array(fd->sub, base, owner, out);
			return;
		case PHPMA_F_VALUE:
			fd->to(p, out);
			return;
	}
	if (fd->count && fd->type != PHPMA_F_CSTR) {
		size_t step = phpma_scalar_size(fd->elem);
		array_init_size(out, fd->count);
		for (uint32_t i = 0; i < fd->count; i++) {
			zval e;
			phpma_scalar_zval(fd->elem, p + i * step, 0, &e);
			add_next_index_zval(out, &e);
		}
		return;
	}
	phpma_scalar_zval(fd->type, p, fd->count, out);
}

static const phpma_field *phpma_field_find(phpma_handle *h, zend_string *name)
{
	for (const phpma_field *fd = h->kind->fields; fd && fd->name; fd++) {
		if (zend_string_equals_cstr(name, fd->name, strlen(fd->name))) {
			return fd;
		}
	}
	return NULL;
}

/* Upstream's struct fields, read live from the C struct; read-only, and only while the handle is initialized. */
static zval *phpma_handle_read(zend_object *obj, zend_string *name, int type, void **cache_slot, zval *rv)
{
	phpma_handle *h = phpma_from_obj(obj);
	const phpma_field *fd = phpma_field_find(h, name);
	if (!fd) {
		return zend_std_read_property(obj, name, type, cache_slot, rv);
	}
	if (type == BP_VAR_W || type == BP_VAR_RW || type == BP_VAR_UNSET) {
		zend_throw_error(NULL, "%s::$%s is read-only: it is miniaudio's state", ZSTR_VAL(obj->ce->name), ZSTR_VAL(name));
		return &EG(uninitialized_zval);
	}
	if (h->state == PHPMA_STORAGE || !h->native || (h->state == PHPMA_BORROWED && h->dep_count && h->deps[0]->state != PHPMA_LIVE)) {
		zend_throw_error(NULL, "%s::$%s: the %s is not initialized", ZSTR_VAL(obj->ce->name), ZSTR_VAL(name), h->kind->name);
		return &EG(uninitialized_zval);
	}
	phpma_field_zval(fd, h->native, h, rv);
	return rv;
}

static zval *phpma_handle_write(zend_object *obj, zend_string *name, zval *value, void **cache_slot)
{
	phpma_handle *h = phpma_from_obj(obj);
	if (phpma_field_find(h, name)) {
		zend_throw_error(NULL, "%s::$%s is read-only: it is miniaudio's state", ZSTR_VAL(obj->ce->name), ZSTR_VAL(name));
		return &EG(error_zval);
	}
	zend_throw_error(NULL, "%s has no property $%s", ZSTR_VAL(obj->ce->name), ZSTR_VAL(name));
	return &EG(error_zval);
}

static int phpma_handle_has(zend_object *obj, zend_string *name, int check_empty, void **cache_slot)
{
	phpma_handle *h = phpma_from_obj(obj);
	if (!phpma_field_find(h, name)) {
		return 0;
	}
	if (check_empty == ZEND_PROPERTY_EXISTS) {
		return 1;
	}
	if (h->state == PHPMA_STORAGE || !h->native) {
		return 0;
	}
	zval rv;
	zval *v = phpma_handle_read(obj, name, BP_VAR_IS, cache_slot, &rv);
	int r = check_empty == ZEND_PROPERTY_NOT_EMPTY ? zend_is_true(v) : Z_TYPE_P(v) != IS_NULL;
	zval_ptr_dtor(&rv);
	return r;
}

static zval *phpma_handle_ptr(zend_object *obj, zend_string *name, int type, void **cache_slot)
{
	return NULL; /* every access goes through read_property: there is no PHP-side storage */
}

static HashTable *phpma_handle_debug(zend_object *obj, int *is_temp)
{
	phpma_handle *h = phpma_from_obj(obj);
	zval arr;
	*is_temp = 1;
	if (h->state == PHPMA_STORAGE || !h->native || !h->kind->fields) {
		array_init(&arr);
		add_assoc_bool(&arr, "initialized", false);
		return Z_ARR(arr);
	}
	phpma_fields_array(h->kind->fields, h->native, h, &arr);
	return Z_ARR(arr);
}

void phpma_handles_minit(void)
{
	memcpy(&phpma_handle_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
	phpma_handle_handlers.offset = XtOffsetOf(phpma_handle, std);
	phpma_handle_handlers.free_obj = phpma_handle_free;
	phpma_handle_handlers.get_gc = phpma_handle_get_gc;
	/* miniaudio keeps pointers into the C struct: a copy would be a second, broken object */
	phpma_handle_handlers.clone_obj = NULL;
	phpma_handle_handlers.read_property = phpma_handle_read;
	phpma_handle_handlers.write_property = phpma_handle_write;
	phpma_handle_handlers.has_property = phpma_handle_has;
	phpma_handle_handlers.get_property_ptr_ptr = phpma_handle_ptr;
	phpma_handle_handlers.get_debug_info = phpma_handle_debug;
}

phpma_handle *phpma_handle_arg(zval *zv, const phpma_kind *kind, uint32_t arg, bool want_live)
{
	phpma_handle *h = Z_PHPMA_P(zv);
	if (h->state == PHPMA_BORROWED && h->dep_count && h->deps[0]->state != PHPMA_LIVE) {
		zend_argument_value_error(arg, "belongs to a %s that was uninitialized", h->deps[0]->kind->name);
		return NULL;
	}
	if (want_live && phpma_handle_forked(h)) {
		return NULL;
	}
	if (want_live && h->state == PHPMA_STORAGE) {
		zend_argument_value_error(arg, "must be an initialized %s", kind->name);
		return NULL;
	}
	if (!want_live && h->state != PHPMA_STORAGE) {
		zend_argument_value_error(arg, "is already initialized; call %s's uninit first", kind->name);
		return NULL;
	}
	if (!want_live && !h->native) {
		/* storage whose miniaudio-allocated memory was freed: give it fresh storage */
		if (posix_memalign(&h->native, 64, kind->size) != 0) {
			zend_error_noreturn(E_ERROR, "miniaudio: out of memory");
		}
		memset(h->native, 0, kind->size);
		zend_hash_index_update_ptr(&PHPMA_G(registry), (zend_ulong)(uintptr_t)h->native, &h->std);
	}
	return h;
}

phpma_handle *phpma_handle_iface_arg(zval *zv, zend_class_entry *iface, uint32_t arg)
{
	if (Z_OBJ_P(zv)->handlers != &phpma_handle_handlers) {
		return NULL; /* value-struct implementer (ma_vfs_callbacks …): caller builds a trampoline */
	}
	phpma_handle *h = Z_PHPMA_P(zv);
	if (h->state == PHPMA_STORAGE) {
		zend_argument_value_error(arg, "must be an initialized %s", ZSTR_VAL(Z_OBJCE_P(zv)->name));
		return NULL;
	}
	if (phpma_handle_forked(h)) {
		return NULL;
	}
	return h;
}

void phpma_handle_zval(void *native, const phpma_kind *kind, zend_object *owner, zval *out)
{
	if (!native) {
		ZVAL_NULL(out);
		return;
	}
	zend_object *obj = zend_hash_index_find_ptr(&PHPMA_G(registry), (zend_ulong)(uintptr_t)native);
	if (obj) {
		ZVAL_OBJ_COPY(out, obj);
		return;
	}
	if (!kind) {
		ZVAL_NULL(out);
		return;
	}
	/* Memory miniaudio owns (an engine's device, a sound's data source): a borrowed view kept valid by its owner. */
	phpma_handle *h = zend_object_alloc(sizeof(phpma_handle), *kind->ce);
	memset(h, 0, XtOffsetOf(phpma_handle, std));
	zend_object_std_init(&h->std, *kind->ce);
	object_properties_init(&h->std, *kind->ce);
	h->std.handlers = &phpma_handle_handlers;
	h->kind = kind;
	h->native = native;
	h->state = PHPMA_BORROWED;
	if (owner) {
		phpma_handle *o = phpma_from_obj(owner);
		h->deps = emalloc(sizeof(phpma_handle *));
		h->deps[0] = o;
		h->dep_count = 1;
		o->dependents++;
		GC_ADDREF(owner);
	}
	ZVAL_OBJ(out, &h->std);
}

void phpma_handle_retain_set(phpma_handle *h, const char *key, zval *value)
{
	if (!h->retain) {
		h->retain = zend_new_array(4);
	}
	if (!value || Z_TYPE_P(value) == IS_NULL) {
		zend_hash_str_del(h->retain, key, strlen(key));
		return;
	}
	Z_TRY_ADDREF_P(value);
	zend_hash_str_update(h->retain, key, strlen(key), value);
}

void phpma_handle_lend(phpma_handle *h, phpma_handle *owner)
{
	if (h->state == PHPMA_LIVE) {
		phpma_live_unlink(h);
	}
	phpma_release_deps(h);
	h->state = PHPMA_BORROWED;
	h->deps = emalloc(sizeof(phpma_handle *));
	h->deps[0] = owner;
	h->dep_count = 1;
	owner->dependents++;
	GC_ADDREF(&owner->std);
}

void phpma_request_shutdown(void)
{
	phpma_callbacks_rshutdown_begin();
	/* Newest first: sounds before engines, nodes before graphs, devices before contexts. */
	while (PHPMA_G(live_tail)) {
		phpma_handle_uninit(PHPMA_G(live_tail));
	}
}

/* ---- conversions ----------------------------------------------------- */

zend_result phpma_int(zval *zv, zend_long min, zend_long max, zend_long *out, const char *what)
{
	zend_long v = Z_TYPE_P(zv) == IS_LONG ? Z_LVAL_P(zv) : zval_get_long(zv);
	if (v < min || v > max) {
		zend_value_error("%s must be between " ZEND_LONG_FMT " and " ZEND_LONG_FMT ", " ZEND_LONG_FMT " given", what, min, max, v);
		return FAILURE;
	}
	*out = v;
	return SUCCESS;
}

zend_result phpma_cstring(zval *zv, char *dst, size_t cap, const char *what)
{
	zend_string *s = Z_STR_P(zv);
	if (ZSTR_LEN(s) >= cap) {
		zend_value_error("%s must be shorter than %zu bytes", what, cap);
		return FAILURE;
	}
	if (memchr(ZSTR_VAL(s), 0, ZSTR_LEN(s))) {
		zend_value_error("%s must not contain NUL bytes", what);
		return FAILURE;
	}
	memset(dst, 0, cap);
	memcpy(dst, ZSTR_VAL(s), ZSTR_LEN(s));
	return SUCCESS;
}

zend_result phpma_strdup(zval *zv, phpma_frame *f, const char **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_STRING) {
		*out = NULL;
		return SUCCESS;
	}
	zend_string *s = Z_STR_P(zv);
	if (memchr(ZSTR_VAL(s), 0, ZSTR_LEN(s))) {
		zend_value_error("%s must not contain NUL bytes", what);
		return FAILURE;
	}
	char *p = phpma_frame_alloc(f, ZSTR_LEN(s) + 1);
	memcpy(p, ZSTR_VAL(s), ZSTR_LEN(s));
	*out = p;
	return SUCCESS;
}

zend_result phpma_wstrdup(zval *zv, phpma_frame *f, const wchar_t **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_STRING) {
		*out = NULL;
		return SUCCESS;
	}
	/* UTF-8 to wchar_t (UTF-32 on Linux and macOS). */
	const unsigned char *s = (const unsigned char *)Z_STRVAL_P(zv);
	size_t len = Z_STRLEN_P(zv);
	wchar_t *w = phpma_frame_alloc(f, (len + 1) * sizeof(wchar_t));
	size_t n = 0;
	for (size_t i = 0; i < len;) {
		uint32_t c = s[i];
		int extra = c < 0x80 ? 0 : (c & 0xE0) == 0xC0 ? 1 : (c & 0xF0) == 0xE0 ? 2 : (c & 0xF8) == 0xF0 ? 3 : -1;
		if (extra < 0 || (extra > 0 && i + extra >= len)) {
			zend_value_error("%s must be valid UTF-8", what);
			return FAILURE;
		}
		if (extra > 0) {
			c &= (0x3Fu >> extra);
			for (int k = 1; k <= extra; k++) {
				if ((s[i + k] & 0xC0) != 0x80) {
					zend_value_error("%s must be valid UTF-8", what);
					return FAILURE;
				}
				c = (c << 6) | (s[i + k] & 0x3F);
			}
		}
		if (c == 0) {
			zend_value_error("%s must not contain NUL bytes", what);
			return FAILURE;
		}
		w[n++] = (wchar_t)c;
		i += extra + 1;
	}
	w[n] = 0;
	*out = w;
	return SUCCESS;
}

void phpma_wstr_zval(const wchar_t *w, zval *out)
{
	if (!w) {
		ZVAL_NULL(out);
		return;
	}
	smart_str buf = {0};
	for (; *w; w++) {
		uint32_t c = (uint32_t)*w;
		if (c < 0x80) {
			smart_str_appendc(&buf, (char)c);
		} else if (c < 0x800) {
			smart_str_appendc(&buf, (char)(0xC0 | (c >> 6)));
			smart_str_appendc(&buf, (char)(0x80 | (c & 0x3F)));
		} else if (c < 0x10000) {
			smart_str_appendc(&buf, (char)(0xE0 | (c >> 12)));
			smart_str_appendc(&buf, (char)(0x80 | ((c >> 6) & 0x3F)));
			smart_str_appendc(&buf, (char)(0x80 | (c & 0x3F)));
		} else {
			smart_str_appendc(&buf, (char)(0xF0 | (c >> 18)));
			smart_str_appendc(&buf, (char)(0x80 | ((c >> 12) & 0x3F)));
			smart_str_appendc(&buf, (char)(0x80 | ((c >> 6) & 0x3F)));
			smart_str_appendc(&buf, (char)(0x80 | (c & 0x3F)));
		}
	}
	smart_str_0(&buf);
	if (buf.s) {
		ZVAL_STR(out, buf.s);
	} else {
		ZVAL_EMPTY_STRING(out);
	}
}

zend_result phpma_handle_field(zval *zv, const phpma_kind *kind, phpma_frame *f, void **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_OBJECT) {
		*out = NULL;
		return SUCCESS;
	}
	phpma_handle *h = Z_PHPMA_P(zv);
	if (h->state == PHPMA_STORAGE) {
		zend_value_error("%s must be an initialized %s", what, kind->name);
		return FAILURE;
	}
	if (phpma_handle_forked(h)) {
		return FAILURE;
	}
	phpma_frame_dep(f, h);
	*out = h->native;
	return SUCCESS;
}

zend_result phpma_iface_field(zval *zv, zend_class_entry *iface, phpma_frame *f, void **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_OBJECT) {
		*out = NULL;
		return SUCCESS;
	}
	phpma_handle *h = NULL;
	*out = phpma_iface_native(zv, iface, 0, &h);
	if (!*out) {
		if (!EG(exception)) {
			zend_value_error("%s must be an initialized %s", what, ZSTR_VAL(iface->name));
		}
		return FAILURE;
	}
	if (h) {
		phpma_frame_dep(f, h);
	}
	return SUCCESS;
}

void *phpma_iface_native(zval *zv, zend_class_entry *iface, uint32_t arg, phpma_handle **hout)
{
	*hout = NULL;
	if (Z_OBJ_P(zv)->handlers != &phpma_handle_handlers) {
		/* a value object (ma_vfs_callbacks, ma_async_notification_callbacks): its native view */
		if (iface == phpma_ce_ma_vfs) {
			return phpma_vfs_value_native(zv);
		}
		if (iface == phpma_ce_ma_async_notification) {
			return phpma_notification_value_native(zv);
		}
		return NULL;
	}
	phpma_handle *h = phpma_handle_iface_arg(zv, iface, arg ? arg : 1);
	if (!h) {
		return NULL;
	}
	*hout = h;
	return h->native;
}

zend_result phpma_alloc_callbacks(zval *obj, const char *what)
{
	zend_object *o = Z_OBJ_P(obj);
	for (uint32_t i = 0; i < o->ce->default_properties_count; i++) {
		zval *p = OBJ_PROP_NUM(o, i);
		if (Z_TYPE_P(p) != IS_NULL && Z_TYPE_P(p) != IS_UNDEF) {
			zend_value_error("%s must hold only null: PHP has no allocator to hand miniaudio", what);
			return FAILURE;
		}
	}
	return SUCCESS;
}

zend_result phpma_u32_list(zval *zv, phpma_frame *f, uint32_t count, ma_uint32 **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_ARRAY) {
		*out = NULL;
		return SUCCESS;
	}
	if (zend_hash_num_elements(Z_ARRVAL_P(zv)) < count) {
		zend_value_error("%s must hold at least %u entries", what, count);
		return FAILURE;
	}
	ma_uint32 *p = phpma_frame_alloc(f, (count ? count : 1) * sizeof(ma_uint32));
	uint32_t i = 0;
	zval *e;
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(zv), e) {
		if (i == count) {
			break;
		}
		zend_long v;
		if (phpma_int(e, 0, UINT32_MAX, &v, what) == FAILURE) {
			return FAILURE;
		}
		p[i++] = (ma_uint32)v;
	} ZEND_HASH_FOREACH_END();
	*out = p;
	return SUCCESS;
}

zend_result phpma_channel_list(zval *zv, phpma_frame *f, ma_uint32 count, ma_channel **out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_ARRAY) {
		*out = NULL;
		return SUCCESS;
	}
	if (zend_hash_num_elements(Z_ARRVAL_P(zv)) < count) {
		zend_value_error("%s must hold at least %u channel positions", what, count);
		return FAILURE;
	}
	ma_channel *p = phpma_frame_alloc(f, (count ? count : 1) * sizeof(ma_channel));
	uint32_t i = 0;
	zval *e;
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(zv), e) {
		if (i == count) {
			break;
		}
		zend_long v;
		if (phpma_int(e, 0, UINT8_MAX, &v, what) == FAILURE) {
			return FAILURE;
		}
		p[i++] = (ma_channel)v;
	} ZEND_HASH_FOREACH_END();
	*out = p;
	return SUCCESS;
}

void phpma_u32_list_zval(const ma_uint32 *in, uint32_t count, zval *out)
{
	if (!in) {
		ZVAL_NULL(out);
		return;
	}
	array_init_size(out, count);
	for (uint32_t i = 0; i < count; i++) {
		add_next_index_long(out, in[i]);
	}
}

void phpma_channel_list_zval(const ma_channel *in, uint32_t count, zval *out)
{
	if (!in) {
		ZVAL_NULL(out);
		return;
	}
	array_init_size(out, count);
	for (uint32_t i = 0; i < count; i++) {
		add_next_index_long(out, in[i]);
	}
}

zend_result phpma_weights(zval *zv, phpma_frame *f, ma_uint32 rows, ma_uint32 cols, float ***out, const char *what)
{
	if (Z_TYPE_P(zv) != IS_ARRAY) {
		*out = NULL;
		return SUCCESS;
	}
	if (zend_hash_num_elements(Z_ARRVAL_P(zv)) < rows) {
		zend_value_error("%s must hold %u rows (channelsIn)", what, rows);
		return FAILURE;
	}
	float **m = phpma_frame_alloc(f, (rows ? rows : 1) * sizeof(float *));
	uint32_t r = 0;
	zval *row;
	ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(zv), row) {
		if (r == rows) {
			break;
		}
		if (Z_TYPE_P(row) != IS_ARRAY || zend_hash_num_elements(Z_ARRVAL_P(row)) < cols) {
			zend_value_error("%s rows must each hold %u weights (channelsOut)", what, cols);
			return FAILURE;
		}
		m[r] = phpma_frame_alloc(f, (cols ? cols : 1) * sizeof(float));
		uint32_t c = 0;
		zval *w;
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(row), w) {
			if (c == cols) {
				break;
			}
			m[r][c++] = (float)zval_get_double(w);
		} ZEND_HASH_FOREACH_END();
		r++;
	} ZEND_HASH_FOREACH_END();
	*out = m;
	return SUCCESS;
}

void phpma_weights_zval(float **in, ma_uint32 rows, ma_uint32 cols, zval *out)
{
	if (!in) {
		ZVAL_NULL(out);
		return;
	}
	array_init_size(out, rows);
	for (uint32_t r = 0; r < rows; r++) {
		zval row;
		array_init_size(&row, cols);
		for (uint32_t c = 0; c < cols; c++) {
			add_next_index_double(&row, in[r][c]);
		}
		add_next_index_zval(out, &row);
	}
}

zend_result phpma_mul_size(uint64_t a, uint64_t b, size_t *out)
{
	uint64_t r;
	/* ZSTR_MAX_LEN bounds every buffer the binding hands back as a string. */
	if (__builtin_mul_overflow(a, b, &r) || r > ZSTR_MAX_LEN) {
		return FAILURE;
	}
	*out = (size_t)r;
	return SUCCESS;
}

void *phpma_frame_keep_bytes(phpma_frame *f, const void *src, size_t len)
{
	void *p = phpma_frame_keep(f, len);
	memcpy(p, src, len);
	return p;
}

/* Bytes per frame of any data source, from its own reported format; 0 when it has none. */
ma_uint32 phpma_ds_bpf(void *ds)
{
	ma_format format;
	ma_uint32 channels;
	if (ma_data_source_get_data_format(ds, &format, &channels, NULL, NULL, 0) != MA_SUCCESS) {
		return 0;
	}
	return ma_get_bytes_per_frame(format, channels);
}

const char *phpma_frame_key(phpma_frame *f, const char *prefix, const char *name)
{
	size_t a = strlen(prefix), b = name ? strlen(name) : 0;
	char *k = phpma_frame_alloc(f, a + b + 1);
	memcpy(k, prefix, a);
	if (b) {
		memcpy(k + a, name, b);
	}
	return k;
}

ma_uint32 phpma_clip_src_bps(ma_format format)
{
	switch (format) {
		case ma_format_u8: return 2;
		case ma_format_s16: return 4;
		case ma_format_s24: return 8;
		case ma_format_s32: return 8;
		case ma_format_f32: return 4;
		default: return 0;
	}
}

bool phpma_all_zero(const void *p, size_t size)
{
	const unsigned char *b = p;
	for (size_t i = 0; i < size; i++) {
		if (b[i]) {
			return false;
		}
	}
	return true;
}

/* Copies every declared property of src (same class) into dst: the in/out struct write-back. */
void phpma_copy_props(zend_object *dst, zend_object *src)
{
	for (int i = 0; i < src->ce->default_properties_count; i++) {
		zval *d = OBJ_PROP_NUM(dst, i);
		zval_ptr_dtor(d);
		ZVAL_COPY(d, OBJ_PROP_NUM(src, i));
	}
}

/* ---- value classes --------------------------------------------------- */

void phpma_value_construct(zend_object *obj, const phpma_value_class *vc, zval *args, uint32_t argc)
{
	for (uint32_t i = 0; i < argc && i < vc->prop_count; i++) {
		if (Z_TYPE(args[i]) == IS_UNDEF) {
			continue;
		}
		if (vc->nested[i] && Z_TYPE(args[i]) == IS_NULL) {
			continue; /* the fresh instance create_object put there stays */
		}
		zend_property_info *info = zend_get_typed_property_info_for_slot(obj, OBJ_PROP_NUM(obj, i));
		zend_update_property_ex(obj->ce, obj, info->name, &args[i]);
		if (EG(exception)) {
			return;
		}
	}
}

void phpma_value_new(zend_class_entry *ce, zval *out)
{
	object_init_ex(out, ce);
}
