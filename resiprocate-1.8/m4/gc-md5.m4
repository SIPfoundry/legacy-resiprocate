# gc-md5.m4 serial 2
dnl Copyright (C) 2005, 2007 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_GC_MD5],
[
  AC_REQUIRE([gl_GC])
  if test "$ac_cv_libgcrypt" != yes; then
    gl_MD5
  fi
])
