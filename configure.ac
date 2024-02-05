AC_PREREQ([2.69])
AC_INIT([limedriver], [1.0], [])
AC_CONFIG_SRCDIR([src/limedriver.cpp])
AM_INIT_AUTOMAKE([1.16 foreign subdir-objects])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES([LIMESUITE], [LimeSuite])
AC_CHECK_TOOL([H5CXX], [h5c++])

# Checks for header files.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
