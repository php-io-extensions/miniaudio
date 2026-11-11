PHP_ARG_ENABLE([miniaudio],
  [whether to enable miniaudio support],
  [AS_HELP_STRING([--enable-miniaudio], [Enable the miniaudio 0.11.26 bindings])],
  [no])

if test "$PHP_MINIAUDIO" != "no"; then
  dnl src/miniaudio_impl.c is the one translation unit that compiles lib/miniaudio.
  miniaudio_sources=" \
    src/miniaudio.c \
    src/runtime.c \
    src/constants.c \
    src/manual.c \
    src/callbacks.c \
    src/backends.c \
    src/gen/types.c \
    src/gen/functions.c \
    src/miniaudio_impl.c"

  PHP_NEW_EXTENSION([miniaudio],
    [$miniaudio_sources],
    [$ext_shared],,
    [-std=gnu17 -fvisibility=hidden -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I$ext_srcdir/lib/miniaudio])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])
  PHP_ADD_BUILD_DIR([$ext_builddir/src/gen])

  dnl Darwin's libSystem provides pthread, dl and m. Backends are loaded at runtime by miniaudio.
  case $host_os in
    darwin*) ;;
    *)
      PHP_ADD_LIBRARY([pthread],, [MINIAUDIO_SHARED_LIBADD])
      PHP_ADD_LIBRARY([m],, [MINIAUDIO_SHARED_LIBADD])
      PHP_ADD_LIBRARY([dl],, [MINIAUDIO_SHARED_LIBADD])
      PHP_SUBST([MINIAUDIO_SHARED_LIBADD])
      ;;
  esac
fi
