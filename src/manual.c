/*
 * Functions whose C shape has no direct PHP form: pointers into miniaudio's own
 * buffers (ring buffer acquisitions, maps), memory miniaudio allocates for the
 * caller (ma_audio_buffer_alloc_and_init, pages, device lists), VFS file
 * handles, planar buffers, and the printf-style log call.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "zend_exceptions.h"
#include "runtime.h"
#include "gen/types.h"
#include "../stubs/manual_arginfo.h"

#define PHPMA_ARG_HANDLE(zv, kind, arg, out) \
	do { \
		(out) = NULL; \
		if ((zv) && !((out) = phpma_handle_arg((zv), &(kind), (arg), true))) { \
			RETURN_THROWS(); \
		} \
	} while (0)

/* ---- ma_vfs_file ----------------------------------------------------- */

typedef struct {
	ma_vfs_file file;
	void *vfs;          /* the ma_vfs it was opened on (NULL: miniaudio's default stdio) */
	zval vfs_obj;       /* keeps that VFS alive */
	zend_object std;
} phpma_vfs_file;

static zend_class_entry *phpma_ce_ma_vfs_file;
static zend_object_handlers phpma_vfs_file_handlers;

static inline phpma_vfs_file *phpma_vfs_file_from(zend_object *o)
{
	return (phpma_vfs_file *)((char *)o - XtOffsetOf(phpma_vfs_file, std));
}

static void phpma_vfs_file_close(phpma_vfs_file *vf)
{
	if (vf->file) {
		ma_vfs_close(vf->vfs, vf->file);
		vf->file = NULL;
	}
	zval_ptr_dtor(&vf->vfs_obj);
	ZVAL_UNDEF(&vf->vfs_obj);
}

static zend_object *phpma_vfs_file_create(zend_class_entry *ce)
{
	phpma_vfs_file *vf = zend_object_alloc(sizeof(phpma_vfs_file), ce);
	vf->file = NULL;
	vf->vfs = NULL;
	ZVAL_UNDEF(&vf->vfs_obj);
	zend_object_std_init(&vf->std, ce);
	object_properties_init(&vf->std, ce);
	vf->std.handlers = &phpma_vfs_file_handlers;
	return &vf->std;
}

static void phpma_vfs_file_free(zend_object *o)
{
	phpma_vfs_file_close(phpma_vfs_file_from(o));
	zend_object_std_dtor(o);
}

/* The C ma_vfs* for a ?ma_vfs argument: a live handle, or NULL for miniaudio's default. */
static bool phpma_vfs_arg(zval *zv, uint32_t arg, void **out, phpma_handle **h)
{
	*out = NULL;
	*h = NULL;
	if (!zv) {
		return true;
	}
	*h = phpma_handle_iface_arg(zv, phpma_ce_ma_vfs, arg);
	if (!*h) {
		if (!EG(exception)) {
			*out = phpma_vfs_value_native(zv);
			return *out != NULL;
		}
		return false;
	}
	*out = (*h)->native;
	return true;
}

static phpma_vfs_file *phpma_vfs_file_arg(zval *zv, void *vfs, uint32_t arg)
{
	if (!zv) {
		zend_argument_value_error(arg, "must be an open ma_vfs_file");
		return NULL;
	}
	phpma_vfs_file *vf = phpma_vfs_file_from(Z_OBJ_P(zv));
	if (!vf->file) {
		zend_argument_value_error(arg, "must be an open ma_vfs_file");
		return NULL;
	}
	if (vf->vfs != vfs) {
		zend_argument_value_error(arg, "was opened on a different VFS");
		return NULL;
	}
	return vf;
}

static void phpma_vfs_open_common(INTERNAL_FUNCTION_PARAMETERS, bool wide)
{
	zval *zvfs = NULL, *zfile;
	zend_string *path = NULL;
	zend_long mode;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_STR_OR_NULL(path)
		Z_PARAM_LONG(mode)
		Z_PARAM_ZVAL(zfile)
	ZEND_PARSE_PARAMETERS_END();

	void *vfs;
	phpma_handle *hv;
	if (!phpma_vfs_arg(zvfs, 1, &vfs, &hv)) {
		RETURN_THROWS();
	}
	if (mode < 0 || mode > UINT32_MAX) {
		zend_argument_value_error(3, "must be between 0 and %u", UINT32_MAX);
		RETURN_THROWS();
	}

	ma_vfs_file file = NULL;
	ma_result r;
	if (wide) {
		phpma_frame f;
		const wchar_t *w = NULL;
		zval zp;
		phpma_frame_init(&f);
		if (path) {
			ZVAL_STR(&zp, path);
			if (phpma_wstrdup(&zp, &f, &w, "$pFilePath") == FAILURE) {
				phpma_frame_free(&f);
				RETURN_THROWS();
			}
		}
		r = ma_vfs_open_w(vfs, w, (ma_uint32)mode, &file);
		phpma_frame_free(&f);
	} else {
		if (path && memchr(ZSTR_VAL(path), 0, ZSTR_LEN(path))) {
			zend_argument_value_error(2, "must not contain NUL bytes");
			RETURN_THROWS();
		}
		r = ma_vfs_open(vfs, path ? ZSTR_VAL(path) : NULL, (ma_uint32)mode, &file);
	}

	if (r == MA_SUCCESS && file) {
		zval obj;
		object_init_ex(&obj, phpma_ce_ma_vfs_file);
		phpma_vfs_file *vf = phpma_vfs_file_from(Z_OBJ(obj));
		vf->file = file;
		vf->vfs = vfs;
		if (zvfs) {
			ZVAL_COPY(&vf->vfs_obj, zvfs);
		}
		ZEND_TRY_ASSIGN_REF_TMP(zfile, &obj);
	} else {
		ZEND_TRY_ASSIGN_REF_NULL(zfile);
	}
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_vfs_open) { phpma_vfs_open_common(INTERNAL_FUNCTION_PARAM_PASSTHRU, false); }
ZEND_FUNCTION(ma_vfs_open_w) { phpma_vfs_open_common(INTERNAL_FUNCTION_PARAM_PASSTHRU, true); }

#define PHPMA_VFS_PROLOGUE(min, max) \
	zval *zvfs = NULL, *zfile = NULL; \
	void *vfs; \
	phpma_handle *hv; \
	phpma_vfs_file *vf;

#define PHPMA_VFS_RESOLVE() \
	if (!phpma_vfs_arg(zvfs, 1, &vfs, &hv)) { RETURN_THROWS(); } \
	if (!(vf = phpma_vfs_file_arg(zfile, vfs, 2))) { RETURN_THROWS(); }

ZEND_FUNCTION(ma_vfs_close)
{
	PHPMA_VFS_PROLOGUE(2, 2)
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()

	ma_result r = ma_vfs_close(vfs, vf->file);
	vf->file = NULL;
	zval_ptr_dtor(&vf->vfs_obj);
	ZVAL_UNDEF(&vf->vfs_obj);
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_vfs_read)
{
	PHPMA_VFS_PROLOGUE(5, 5)
	zval *zdst, *zread;
	zend_long size;
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
		Z_PARAM_ZVAL(zdst)
		Z_PARAM_LONG(size)
		Z_PARAM_ZVAL(zread)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()
	if (size < 0 || (size_t)size > ZSTR_MAX_LEN) {
		zend_argument_value_error(4, "must be between 0 and the largest string size");
		RETURN_THROWS();
	}

	zend_string *buf = zend_string_alloc((size_t)size, 0);
	size_t got = 0;
	ma_result r = ma_vfs_read(vfs, vf->file, ZSTR_VAL(buf), (size_t)size, &got);
	if (got > (size_t)size) {
		got = (size_t)size;
	}
	buf = zend_string_truncate(buf, got, 0);
	ZSTR_VAL(buf)[got] = '\0';
	ZEND_TRY_ASSIGN_REF_STR(zdst, buf);
	ZEND_TRY_ASSIGN_REF_LONG(zread, (zend_long)got);
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_vfs_write)
{
	PHPMA_VFS_PROLOGUE(5, 5)
	zend_string *src;
	zend_long size;
	zval *zwritten;
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
		Z_PARAM_STR(src)
		Z_PARAM_LONG(size)
		Z_PARAM_ZVAL(zwritten)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()
	if (size < 0 || (size_t)size > ZSTR_LEN(src)) {
		zend_argument_value_error(4, "must be between 0 and the length of $pSrc (%zu)", ZSTR_LEN(src));
		RETURN_THROWS();
	}

	size_t written = 0;
	ma_result r = ma_vfs_write(vfs, vf->file, ZSTR_VAL(src), (size_t)size, &written);
	ZEND_TRY_ASSIGN_REF_LONG(zwritten, (zend_long)written);
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_vfs_seek)
{
	PHPMA_VFS_PROLOGUE(4, 4)
	zend_long offset, origin;
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(origin)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()
	if (origin < INT32_MIN || origin > INT32_MAX) {
		zend_argument_value_error(4, "must be a ma_seek_origin");
		RETURN_THROWS();
	}

	RETURN_LONG(ma_vfs_seek(vfs, vf->file, (ma_int64)offset, (ma_seek_origin)origin));
}

ZEND_FUNCTION(ma_vfs_tell)
{
	PHPMA_VFS_PROLOGUE(3, 3)
	zval *zcursor;
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
		Z_PARAM_ZVAL(zcursor)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()

	ma_int64 cursor = 0;
	ma_result r = ma_vfs_tell(vfs, vf->file, &cursor);
	ZEND_TRY_ASSIGN_REF_LONG(zcursor, (zend_long)cursor);
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_vfs_info)
{
	PHPMA_VFS_PROLOGUE(3, 3)
	zval *zinfo = NULL;
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zvfs, phpma_ce_ma_vfs)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zfile, phpma_ce_ma_vfs_file)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zinfo, phpma_ce_ma_file_info)
	ZEND_PARSE_PARAMETERS_END();
	PHPMA_VFS_RESOLVE()

	ma_file_info info;
	memset(&info, 0, sizeof(info));
	ma_result r = ma_vfs_info(vfs, vf->file, zinfo ? &info : NULL);
	if (zinfo) {
		zval nv;
		phpma_to_ma_file_info(&info, &nv);
		phpma_copy_props(Z_OBJ_P(zinfo), Z_OBJ(nv));
		zval_ptr_dtor(&nv);
	}
	RETURN_LONG(r);
}

/* ---- log ------------------------------------------------------------- */

ZEND_FUNCTION(ma_log_postf)
{
	zval *zlog = NULL, *args = NULL;
	zend_long level;
	zend_string *format;
	uint32_t argc = 0;

	ZEND_PARSE_PARAMETERS_START(3, -1)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zlog, phpma_ce_ma_log)
		Z_PARAM_LONG(level)
		Z_PARAM_STR(format)
		Z_PARAM_VARIADIC('*', args, argc)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zlog, phpma_kind_ma_log, 1, h);
	if (level < 0 || level > UINT32_MAX) {
		zend_argument_value_error(2, "must be between 0 and %u", UINT32_MAX);
		RETURN_THROWS();
	}

	/* The format is PHP's sprintf: C varargs cannot be built from PHP values. */
	zval fname, result, *params = safe_emalloc(argc + 1, sizeof(zval), 0);
	ZVAL_STRINGL(&fname, "sprintf", sizeof("sprintf") - 1);
	ZVAL_STR(&params[0], format);
	for (uint32_t i = 0; i < argc; i++) {
		ZVAL_COPY_VALUE(&params[i + 1], &args[i]);
	}
	zend_result ok = call_user_function(NULL, NULL, &fname, &result, argc + 1, params);
	efree(params);
	zval_ptr_dtor(&fname);
	if (ok == FAILURE || EG(exception) || Z_TYPE(result) != IS_STRING) {
		zval_ptr_dtor(&result);
		RETURN_THROWS();
	}
	if (memchr(Z_STRVAL(result), 0, Z_STRLEN(result))) {
		zval_ptr_dtor(&result);
		zend_argument_value_error(3, "must not format to a message containing NUL bytes");
		RETURN_THROWS();
	}
	ma_result r = ma_log_post(h ? h->native : NULL, (ma_uint32)level, Z_STRVAL(result));
	zval_ptr_dtor(&result);
	RETURN_LONG(r);
}

/* ---- planar and offset buffers --------------------------------------- */

static zend_result phpma_frames_bytes(zend_long frameCount, zend_long format, zend_long channels, uint32_t frame_arg, size_t *bytes, size_t *bpf)
{
	if (format < 0 || format > ma_format_count || channels < 0 || channels > MA_MAX_CHANNELS) {
		zend_value_error("format and channels must describe a miniaudio frame");
		return FAILURE;
	}
	*bpf = ma_get_bytes_per_frame((ma_format)format, (ma_uint32)channels);
	if (frameCount < 0 || phpma_mul_size((uint64_t)frameCount, *bpf, bytes) == FAILURE) {
		zend_argument_value_error(frame_arg, "describes a buffer larger than memory");
		return FAILURE;
	}
	return SUCCESS;
}

ZEND_FUNCTION(ma_deinterleave_pcm_frames)
{
	zend_long format, channels, frameCount;
	zend_string *in;
	zval *zout;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(channels)
		Z_PARAM_LONG(frameCount)
		Z_PARAM_STR(in)
		Z_PARAM_ZVAL(zout)
	ZEND_PARSE_PARAMETERS_END();

	size_t bytes, bpf;
	if (phpma_frames_bytes(frameCount, format, channels, 3, &bytes, &bpf) == FAILURE) {
		RETURN_THROWS();
	}
	if (ZSTR_LEN(in) < bytes) {
		zend_argument_value_error(4, "must hold at least %zu bytes, %zu given", bytes, ZSTR_LEN(in));
		RETURN_THROWS();
	}
	size_t plane = channels ? bytes / (size_t)channels : 0;
	zend_string **planes = ecalloc(channels ? channels : 1, sizeof(zend_string *));
	void **ptrs = ecalloc(channels ? channels : 1, sizeof(void *));
	for (zend_long c = 0; c < channels; c++) {
		planes[c] = zend_string_alloc(plane, 0);
		ZSTR_VAL(planes[c])[plane] = '\0';
		ptrs[c] = ZSTR_VAL(planes[c]);
	}
	ma_deinterleave_pcm_frames((ma_format)format, (ma_uint32)channels, (ma_uint64)frameCount, ZSTR_VAL(in), ptrs);
	zval arr;
	array_init_size(&arr, (uint32_t)channels);
	for (zend_long c = 0; c < channels; c++) {
		add_next_index_str(&arr, planes[c]);
	}
	efree(planes);
	efree(ptrs);
	ZEND_TRY_ASSIGN_REF_ARR(zout, Z_ARR(arr));
}

ZEND_FUNCTION(ma_interleave_pcm_frames)
{
	zend_long format, channels, frameCount;
	HashTable *in;
	zval *zout;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(channels)
		Z_PARAM_LONG(frameCount)
		Z_PARAM_ARRAY_HT(in)
		Z_PARAM_ZVAL(zout)
	ZEND_PARSE_PARAMETERS_END();

	size_t bytes, bpf;
	if (phpma_frames_bytes(frameCount, format, channels, 3, &bytes, &bpf) == FAILURE) {
		RETURN_THROWS();
	}
	size_t plane = channels ? bytes / (size_t)channels : 0;
	if (zend_hash_num_elements(in) < (uint32_t)channels) {
		zend_argument_value_error(4, "must hold one string per channel (%ld)", (long)channels);
		RETURN_THROWS();
	}
	const void **ptrs = ecalloc(channels ? channels : 1, sizeof(void *));
	zend_long c = 0;
	zval *e;
	ZEND_HASH_FOREACH_VAL(in, e) {
		if (c == channels) {
			break;
		}
		if (Z_TYPE_P(e) != IS_STRING || Z_STRLEN_P(e) < plane) {
			efree(ptrs);
			zend_argument_value_error(4, "must hold strings of at least %zu bytes", plane);
			RETURN_THROWS();
		}
		ptrs[c++] = Z_STRVAL_P(e);
	} ZEND_HASH_FOREACH_END();
	zend_string *out = zend_string_alloc(bytes, 0);
	ZSTR_VAL(out)[bytes] = '\0';
	ma_interleave_pcm_frames((ma_format)format, (ma_uint32)channels, (ma_uint64)frameCount, ptrs, ZSTR_VAL(out));
	efree(ptrs);
	ZEND_TRY_ASSIGN_REF_STR(zout, out);
}

/* The C functions return p + offset; the PHP form returns the bytes from there on. */
static void phpma_offset(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_string *p;
	zend_long offset, format, channels;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(p)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(channels)
	ZEND_PARSE_PARAMETERS_END();

	size_t bytes, bpf;
	if (phpma_frames_bytes(offset, format, channels, 2, &bytes, &bpf) == FAILURE) {
		RETURN_THROWS();
	}
	if (bytes > ZSTR_LEN(p)) {
		zend_argument_value_error(2, "points past the end of $p");
		RETURN_THROWS();
	}
	RETURN_STRINGL(ZSTR_VAL(p) + bytes, ZSTR_LEN(p) - bytes);
}

ZEND_FUNCTION(ma_offset_pcm_frames_ptr) { phpma_offset(INTERNAL_FUNCTION_PARAM_PASSTHRU); }
ZEND_FUNCTION(ma_offset_pcm_frames_const_ptr) { phpma_offset(INTERNAL_FUNCTION_PARAM_PASSTHRU); }

/* ---- ring buffers ---------------------------------------------------- */

/*
 * acquire_read copies the readable region into $ppBufferOut. acquire_write hands
 * out a zeroed string by reference and remembers that variable; commit_write
 * copies what the variable then holds into the acquired region, so the C
 * signatures stay as they are.
 */
static void phpma_rb_acquire(INTERNAL_FUNCTION_PARAMETERS, bool pcm, bool write)
{
	zval *zrb = NULL, *zsize, *zbuf;
	const phpma_kind *kind = pcm ? &phpma_kind_ma_pcm_rb : &phpma_kind_ma_rb;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zrb, *kind->ce)
		Z_PARAM_ZVAL(zsize)
		Z_PARAM_ZVAL(zbuf)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zrb, *kind, 1, h);
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	zend_long want = zval_get_long(Z_REFVAL_P(zsize));
	if (want < 0 || want > UINT32_MAX) {
		zend_argument_value_error(2, "must be between 0 and %u", UINT32_MAX);
		RETURN_THROWS();
	}

	void *ptr = NULL;
	ma_result r;
	size_t bytes;
	if (pcm) {
		ma_pcm_rb *rb = h->native;
		ma_uint32 frames = (ma_uint32)want;
		r = write ? ma_pcm_rb_acquire_write(rb, &frames, &ptr) : ma_pcm_rb_acquire_read(rb, &frames, &ptr);
		bytes = (size_t)frames * ma_get_bytes_per_frame(rb->format, rb->channels);
		ZEND_TRY_ASSIGN_REF_LONG(zsize, frames);
	} else {
		size_t size = (size_t)want;
		r = write ? ma_rb_acquire_write(h->native, &size, &ptr) : ma_rb_acquire_read(h->native, &size, &ptr);
		bytes = size;
		ZEND_TRY_ASSIGN_REF_LONG(zsize, (zend_long)size);
	}
	if (r != MA_SUCCESS || !ptr) {
		ZEND_TRY_ASSIGN_REF_NULL(zbuf);
		RETURN_LONG(r);
	}
	ZEND_TRY_ASSIGN_REF_STRINGL(zbuf, (const char *)ptr, bytes);
	if (write) {
		h->acq_write = ptr;
		h->acq_write_size = bytes;
		zval_ptr_dtor(&h->acq_write_ref);
		ZVAL_COPY(&h->acq_write_ref, zbuf); /* the reference itself, not its value */
	}
	RETURN_LONG(r);
}

static void phpma_rb_commit_write(INTERNAL_FUNCTION_PARAMETERS, bool pcm)
{
	zval *zrb = NULL;
	zend_long size;
	const phpma_kind *kind = pcm ? &phpma_kind_ma_pcm_rb : &phpma_kind_ma_rb;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zrb, *kind->ce)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zrb, *kind, 1, h);
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	if (size < 0 || size > UINT32_MAX) {
		zend_argument_value_error(2, "must be between 0 and %u", UINT32_MAX);
		RETURN_THROWS();
	}
	if (h->acq_write && Z_TYPE(h->acq_write_ref) == IS_REFERENCE) {
		zval *v = Z_REFVAL(h->acq_write_ref);
		if (Z_TYPE_P(v) == IS_STRING) {
			size_t n = MIN(Z_STRLEN_P(v), h->acq_write_size);
			memcpy(h->acq_write, Z_STRVAL_P(v), n);
		}
	}
	h->acq_write = NULL;
	zval_ptr_dtor(&h->acq_write_ref);
	ZVAL_UNDEF(&h->acq_write_ref);
	RETURN_LONG(pcm ? ma_pcm_rb_commit_write(h->native, (ma_uint32)size) : ma_rb_commit_write(h->native, (size_t)size));
}

ZEND_FUNCTION(ma_rb_acquire_read) { phpma_rb_acquire(INTERNAL_FUNCTION_PARAM_PASSTHRU, false, false); }
ZEND_FUNCTION(ma_rb_acquire_write) { phpma_rb_acquire(INTERNAL_FUNCTION_PARAM_PASSTHRU, false, true); }
ZEND_FUNCTION(ma_rb_commit_write) { phpma_rb_commit_write(INTERNAL_FUNCTION_PARAM_PASSTHRU, false); }
ZEND_FUNCTION(ma_pcm_rb_acquire_read) { phpma_rb_acquire(INTERNAL_FUNCTION_PARAM_PASSTHRU, true, false); }
ZEND_FUNCTION(ma_pcm_rb_acquire_write) { phpma_rb_acquire(INTERNAL_FUNCTION_PARAM_PASSTHRU, true, true); }
ZEND_FUNCTION(ma_pcm_rb_commit_write) { phpma_rb_commit_write(INTERNAL_FUNCTION_PARAM_PASSTHRU, true); }

/* The C functions return pBuffer + index * stride; the PHP form returns that subbuffer's bytes. */
static void phpma_rb_subbuffer(INTERNAL_FUNCTION_PARAMETERS, bool pcm)
{
	zval *zrb = NULL;
	zend_long index;
	zend_string *buf;
	const phpma_kind *kind = pcm ? &phpma_kind_ma_pcm_rb : &phpma_kind_ma_rb;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zrb, *kind->ce)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(buf)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zrb, *kind, 1, h);
	if (!h) {
		zend_argument_value_error(1, "must be an initialized %s", kind->name);
		RETURN_THROWS();
	}
	ma_rb *rb = pcm ? &((ma_pcm_rb *)h->native)->rb : h->native;
	if (index < 0 || (uint64_t)index >= rb->subbufferCount) {
		zend_argument_value_error(2, "must be below the subbuffer count (%u)", rb->subbufferCount);
		RETURN_THROWS();
	}
	size_t off = (size_t)index * rb->subbufferStrideInBytes;
	size_t len = rb->subbufferSizeInBytes;
	if (off + len > ZSTR_LEN(buf)) {
		zend_argument_value_error(3, "must hold every subbuffer (%zu bytes)", off + len);
		RETURN_THROWS();
	}
	RETURN_STRINGL(ZSTR_VAL(buf) + off, len);
}

ZEND_FUNCTION(ma_rb_get_subbuffer_ptr) { phpma_rb_subbuffer(INTERNAL_FUNCTION_PARAM_PASSTHRU, false); }
ZEND_FUNCTION(ma_pcm_rb_get_subbuffer_ptr) { phpma_rb_subbuffer(INTERNAL_FUNCTION_PARAM_PASSTHRU, true); }

/* ---- audio buffer maps ----------------------------------------------- */

static void phpma_map(INTERNAL_FUNCTION_PARAMETERS, bool ref)
{
	zval *zb = NULL, *zout, *zcount;
	const phpma_kind *kind = ref ? &phpma_kind_ma_audio_buffer_ref : &phpma_kind_ma_audio_buffer;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zb, *kind->ce)
		Z_PARAM_ZVAL(zout)
		Z_PARAM_ZVAL(zcount)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zb, *kind, 1, h);
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	zend_long want = zval_get_long(Z_REFVAL_P(zcount));
	if (want < 0) {
		zend_argument_value_error(3, "must not be negative");
		RETURN_THROWS();
	}
	ma_audio_buffer_ref *r = ref ? h->native : &((ma_audio_buffer *)h->native)->ref;
	ma_uint64 frames = (ma_uint64)want;
	void *ptr = NULL;
	ma_result res = ref ? ma_audio_buffer_ref_map(h->native, &ptr, &frames) : ma_audio_buffer_map(h->native, &ptr, &frames);
	ZEND_TRY_ASSIGN_REF_LONG(zcount, (zend_long)frames);
	if (res != MA_SUCCESS || !ptr) {
		ZEND_TRY_ASSIGN_REF_NULL(zout);
	} else {
		ZEND_TRY_ASSIGN_REF_STRINGL(zout, (const char *)ptr, (size_t)frames * ma_get_bytes_per_frame(r->format, r->channels));
	}
	RETURN_LONG(res);
}

ZEND_FUNCTION(ma_audio_buffer_ref_map) { phpma_map(INTERNAL_FUNCTION_PARAM_PASSTHRU, true); }
ZEND_FUNCTION(ma_audio_buffer_map) { phpma_map(INTERNAL_FUNCTION_PARAM_PASSTHRU, false); }

/* ---- memory miniaudio allocates -------------------------------------- */

/* Wraps a struct miniaudio allocated in a live handle object of the given class. */
static void phpma_adopt(void *native, const phpma_kind *kind, void (*uninit)(void *), phpma_frame *f, zval *out)
{
	object_init_ex(out, *kind->ce);
	phpma_handle *h = Z_PHPMA_P(out);
	zend_hash_index_del(&PHPMA_G(registry), (zend_ulong)(uintptr_t)h->native);
	free(h->native);
	h->native = native;
	h->foreign = true;
	h->uninit_override = uninit;
	zend_hash_index_update_ptr(&PHPMA_G(registry), (zend_ulong)(uintptr_t)native, &h->std);
	phpma_frame_commit(f, h);
}

static void phpma_audio_buffer_free(void *p)
{
	ma_audio_buffer_uninit_and_free(p);
}

ZEND_FUNCTION(ma_audio_buffer_alloc_and_init)
{
	zval *zcfg = NULL, *zout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zcfg, phpma_ce_ma_audio_buffer_config)
		Z_PARAM_ZVAL(zout)
	ZEND_PARSE_PARAMETERS_END();

	phpma_frame f;
	phpma_frame_init(&f);
	ma_audio_buffer_config cfg;
	memset(&cfg, 0, sizeof(cfg));
	if (zcfg) {
		if (phpma_from_ma_audio_buffer_config(Z_OBJ_P(zcfg), &cfg, &f) == FAILURE) {
			phpma_frame_free(&f);
			RETURN_THROWS();
		}
		size_t need;
		if (cfg.pData && (phpma_mul_size(cfg.sizeInFrames, ma_get_bytes_per_frame(cfg.format, cfg.channels), &need) == FAILURE
				|| Z_STRLEN_P(OBJ_PROP_NUM(Z_OBJ_P(zcfg), 4)) < need)) {
			phpma_frame_free(&f);
			zend_argument_value_error(1, "pData must hold sizeInFrames frames");
			RETURN_THROWS();
		}
	}
	ma_audio_buffer *buf = NULL;
	ma_result r = ma_audio_buffer_alloc_and_init(zcfg ? &cfg : NULL, &buf);
	if (r == MA_SUCCESS && buf) {
		zval obj;
		/* alloc_and_init copies pData: the frame's copy is released with the frame */
		phpma_frame tmp;
		phpma_frame_init(&tmp);
		phpma_adopt(buf, &phpma_kind_ma_audio_buffer, phpma_audio_buffer_free, &tmp, &obj);
		phpma_frame_free(&tmp);
		ZEND_TRY_ASSIGN_REF_TMP(zout, &obj);
	} else {
		ZEND_TRY_ASSIGN_REF_NULL(zout);
	}
	phpma_frame_free(&f);
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_audio_buffer_uninit_and_free)
{
	zval *zb = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zb, phpma_ce_ma_audio_buffer)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zb, phpma_kind_ma_audio_buffer, 1, h);
	if (!h) {
		return;
	}
	if (!h->foreign) {
		/* storage the binding owns, initialised by ma_audio_buffer_init: upstream would free() it */
		zend_argument_value_error(1, "was not made by ma_audio_buffer_alloc_and_init; use ma_audio_buffer_uninit");
		RETURN_THROWS();
	}
	phpma_handle_uninit(h);
}

/* Pages: allocated by miniaudio, then freed by free_page or owned by the data after append_page. */
static void phpma_page_none(void *p)
{
	(void)p;
}

ZEND_FUNCTION(ma_paged_audio_buffer_data_allocate_page)
{
	zval *zdata = NULL, *zalloc = NULL, *zout;
	zend_long frames;
	zend_string *initial = NULL;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zdata, phpma_ce_ma_paged_audio_buffer_data)
		Z_PARAM_LONG(frames)
		Z_PARAM_STR_OR_NULL(initial)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zalloc, phpma_ce_ma_allocation_callbacks)
		Z_PARAM_ZVAL(zout)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zdata, phpma_kind_ma_paged_audio_buffer_data, 1, h);
	if (zalloc && phpma_alloc_callbacks(zalloc, "$pAllocationCallbacks") == FAILURE) {
		RETURN_THROWS();
	}
	if (!h) {
		RETURN_LONG(MA_INVALID_ARGS);
	}
	ma_paged_audio_buffer_data *data = h->native;
	size_t need;
	if (frames < 0 || phpma_mul_size((uint64_t)frames, ma_get_bytes_per_frame(data->format, data->channels), &need) == FAILURE) {
		zend_argument_value_error(2, "describes a page larger than memory");
		RETURN_THROWS();
	}
	if (initial && ZSTR_LEN(initial) < need) {
		zend_argument_value_error(3, "must hold at least %zu bytes, %zu given", need, ZSTR_LEN(initial));
		RETURN_THROWS();
	}
	ma_paged_audio_buffer_page *page = NULL;
	ma_result r = ma_paged_audio_buffer_data_allocate_page(data, (ma_uint64)frames, initial ? ZSTR_VAL(initial) : NULL, NULL, &page);
	if (r == MA_SUCCESS && page) {
		zval obj;
		phpma_frame f;
		phpma_frame_init(&f);
		phpma_frame_dep(&f, h);
		phpma_adopt(page, &phpma_kind_ma_paged_audio_buffer_page, phpma_page_none, &f, &obj);
		phpma_frame_free(&f);
		ZEND_TRY_ASSIGN_REF_TMP(zout, &obj);
	} else {
		ZEND_TRY_ASSIGN_REF_NULL(zout);
	}
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_paged_audio_buffer_data_free_page)
{
	zval *zdata = NULL, *zpage = NULL, *zalloc = NULL;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zdata, phpma_ce_ma_paged_audio_buffer_data)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zpage, phpma_ce_ma_paged_audio_buffer_page)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zalloc, phpma_ce_ma_allocation_callbacks)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *hd, *hp;
	PHPMA_ARG_HANDLE(zdata, phpma_kind_ma_paged_audio_buffer_data, 1, hd);
	PHPMA_ARG_HANDLE(zpage, phpma_kind_ma_paged_audio_buffer_page, 2, hp);
	if (zalloc && phpma_alloc_callbacks(zalloc, "$pAllocationCallbacks") == FAILURE) {
		RETURN_THROWS();
	}
	if (hp && hp->state == PHPMA_BORROWED) {
		zend_argument_value_error(2, "was appended; the paged audio buffer data owns it");
		RETURN_THROWS();
	}
	ma_result r = ma_paged_audio_buffer_data_free_page(hd ? hd->native : NULL, hp ? hp->native : NULL, NULL);
	if (r == MA_SUCCESS && hp) {
		phpma_handle_uninit(hp); /* miniaudio freed the page: the object is empty again */
	}
	RETURN_LONG(r);
}

ZEND_FUNCTION(ma_paged_audio_buffer_data_append_page)
{
	zval *zdata = NULL, *zpage = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zdata, phpma_ce_ma_paged_audio_buffer_data)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zpage, phpma_ce_ma_paged_audio_buffer_page)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *hd, *hp;
	PHPMA_ARG_HANDLE(zdata, phpma_kind_ma_paged_audio_buffer_data, 1, hd);
	PHPMA_ARG_HANDLE(zpage, phpma_kind_ma_paged_audio_buffer_page, 2, hp);
	if (hp && hp->state == PHPMA_BORROWED) {
		zend_argument_value_error(2, "is already appended");
		RETURN_THROWS();
	}
	ma_result r = ma_paged_audio_buffer_data_append_page(hd ? hd->native : NULL, hp ? hp->native : NULL);
	if (r == MA_SUCCESS && hp && hd) {
		phpma_handle_lend(hp, hd);
	}
	RETURN_LONG(r);
}

/* ---- device enumeration ---------------------------------------------- */

ZEND_FUNCTION(ma_context_get_devices)
{
	zval *zctx = NULL, *zplay, *zplayn, *zcap, *zcapn;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_OBJECT_OF_CLASS_OR_NULL(zctx, phpma_ce_ma_context)
		Z_PARAM_ZVAL(zplay)
		Z_PARAM_ZVAL(zplayn)
		Z_PARAM_ZVAL(zcap)
		Z_PARAM_ZVAL(zcapn)
	ZEND_PARSE_PARAMETERS_END();

	phpma_handle *h;
	PHPMA_ARG_HANDLE(zctx, phpma_kind_ma_context, 1, h);
	ma_device_info *play = NULL, *cap = NULL;
	ma_uint32 nplay = 0, ncap = 0;
	ma_result r = ma_context_get_devices(h ? h->native : NULL, &play, &nplay, &cap, &ncap);
	zval a, b;
	array_init_size(&a, nplay);
	array_init_size(&b, ncap);
	if (r == MA_SUCCESS) {
		for (ma_uint32 i = 0; i < nplay; i++) {
			zval e;
			phpma_to_ma_device_info(&play[i], &e);
			add_next_index_zval(&a, &e);
		}
		for (ma_uint32 i = 0; i < ncap; i++) {
			zval e;
			phpma_to_ma_device_info(&cap[i], &e);
			add_next_index_zval(&b, &e);
		}
	}
	ZEND_TRY_ASSIGN_REF_ARR(zplay, Z_ARR(a));
	ZEND_TRY_ASSIGN_REF_LONG(zplayn, nplay);
	ZEND_TRY_ASSIGN_REF_ARR(zcap, Z_ARR(b));
	ZEND_TRY_ASSIGN_REF_LONG(zcapn, ncap);
	RETURN_LONG(r);
}

/* ---- registration ---------------------------------------------------- */

void phpma_manual_minit(void)
{
	zend_register_functions(NULL, ext_functions, NULL, MODULE_PERSISTENT);
	phpma_ce_ma_vfs_file = register_class_ma_vfs_file();
	phpma_ce_ma_vfs_file->create_object = phpma_vfs_file_create;
	memcpy(&phpma_vfs_file_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
	phpma_vfs_file_handlers.offset = XtOffsetOf(phpma_vfs_file, std);
	phpma_vfs_file_handlers.free_obj = phpma_vfs_file_free;
	phpma_vfs_file_handlers.clone_obj = NULL;
}
