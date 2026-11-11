/*
 * miniaudio: 1:1 bindings of miniaudio 0.11.26. The library is compiled into
 * this extension. Function, struct, and constant names stay the C names.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_miniaudio.h"

#include "ext/standard/info.h"

#include "miniaudio.h"
#include "runtime.h"
#include "callbacks.h"
#include "gen/types.h"

void phpma_constants_minit(int module_number);
void phpma_functions_minit(void);
void phpma_manual_minit(void);

#include "../stubs/miniaudio_arginfo.h"

static PHP_MINIT_FUNCTION(miniaudio)
{
#if defined(ZTS) && defined(COMPILE_DL_MINIAUDIO)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	register_miniaudio_symbols(module_number);
	phpma_constants_minit(module_number);
	phpma_handles_minit();
	phpma_types_minit();
	phpma_functions_minit();
	phpma_manual_minit();
	phpma_callbacks_minit();

	return SUCCESS;
}

static PHP_GINIT_FUNCTION(miniaudio)
{
#if defined(COMPILE_DL_MINIAUDIO) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	memset(miniaudio_globals, 0, sizeof(*miniaudio_globals));
}

static PHP_RINIT_FUNCTION(miniaudio)
{
#if defined(ZTS) && defined(COMPILE_DL_MINIAUDIO)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&PHPMA_G(registry), 64, NULL, NULL, 0);
	phpma_callbacks_rinit();
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(miniaudio)
{
	phpma_request_shutdown();
	phpma_callbacks_rshutdown_end();
	return SUCCESS;
}

/* After the object store is freed: handle objects remove themselves from the registry until then. */
static ZEND_MODULE_POST_ZEND_DEACTIVATE_D(miniaudio)
{
	zend_hash_destroy(&PHPMA_G(registry));
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(miniaudio)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "miniaudio support", "enabled");
	php_info_print_table_row(2, "Version", PHP_MINIAUDIO_VERSION);
	php_info_print_table_row(2, "miniaudio version", ma_version_string());
	php_info_print_table_row(2, "miniaudio commit", PHP_MINIAUDIO_UPSTREAM_COMMIT);
	php_info_print_table_end();
}

zend_module_entry miniaudio_module_entry = {
	STANDARD_MODULE_HEADER,
	"miniaudio",
	NULL,
	PHP_MINIT(miniaudio),
	NULL,
	PHP_RINIT(miniaudio),
	PHP_RSHUTDOWN(miniaudio),
	PHP_MINFO(miniaudio),
	PHP_MINIAUDIO_VERSION,
	PHP_MODULE_GLOBALS(miniaudio),
	PHP_GINIT(miniaudio),
	NULL,
	ZEND_MODULE_POST_ZEND_DEACTIVATE_N(miniaudio),
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_MINIAUDIO
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(miniaudio)
#endif
