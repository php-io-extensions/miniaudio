/*
 * The one translation unit that compiles miniaudio, with stb_vorbis for Ogg
 * Vorbis, in the order upstream documents: stb_vorbis header, miniaudio
 * implementation, stb_vorbis implementation.
 */

#define STB_VORBIS_HEADER_ONLY
#include "extras/stb_vorbis.c"

#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"

#undef STB_VORBIS_HEADER_ONLY
#include "extras/stb_vorbis.c"
