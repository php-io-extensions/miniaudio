#ifndef PHP_MINIAUDIO_H
#define PHP_MINIAUDIO_H

extern zend_module_entry miniaudio_module_entry;
#define phpext_miniaudio_ptr &miniaudio_module_entry

#define PHP_MINIAUDIO_VERSION "0.11.0"

/* miniaudio tag 0.11.26. A newer library lands only by replacing lib/miniaudio/ from a published tag. */
#define PHP_MINIAUDIO_UPSTREAM_COMMIT "877ea4a7c2601c7b0f2a44e83dfac42e6470fea6"

#if defined(ZTS) && defined(COMPILE_DL_MINIAUDIO)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
