AC_PREREQ([2.65])

#
# Essential initialization for the generated `configure' script.
#
AC_INIT([ApprovalTests.Cpp], [0.9.0])

#
# Alternative directory for auxiliary scripts.
#
AC_CONFIG_AUX_DIR(cfg)

#
# Init Automake subsystem.
#
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([cfg/config.h])

#
# It checks for the C++ compiler, and sets the variables CXX, GXX and CXXFLAGS.
#
AC_PROG_CXX
LT_INIT([disable-shared])

#
# Checks for libraries.
#
AC_CHECK_LIB(pthread, pthread_create)

#
# Create Makefile by copying the input file (Makefile.in) 
#
AC_CONFIG_FILES([Makefile tests/Makefile])

#
# Call gtest's configure script recursively.
#
AC_CONFIG_SUBDIRS([dependencies/gtest-1.7.0])

#
# Output the generated files. No further autoconf macros may be used.
#
AC_OUTPUT

