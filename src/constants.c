#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "miniaudio.h"
#include "../stubs/constants_arginfo.h"

void phpma_constants_minit(int module_number)
{
	register_constants_symbols(module_number);
}
