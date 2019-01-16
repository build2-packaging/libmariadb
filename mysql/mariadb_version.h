/*
 * file      : mysql/mariadb_version.h
 * copyright : Copyright (c) 2009-2019 Code Synthesis Tools CC
 * license   : LGPLv2.1; see accompanying COPYING file
 */

#include <mysql/version.h>

/*
 * Cancel the API functions __stdcall calling convention for MinGW when
 * building 32 bits targets (see mysql/ma_config.h for details).
 */
#if defined(__MINGW32__) && !defined(_WIN64)
#  undef  STDCALL
#  define STDCALL
#endif
