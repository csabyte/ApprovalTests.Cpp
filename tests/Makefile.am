TESTS = checklib
bin_PROGRAMS = checklib
checklib_SOURCES = checklib.cpp 
AM_CPPFLAGS = -I$(top_srcdir)/dependencies/gtest-1.7.0/include -I$(top_srcdir)/include/approvers
checklib_LDADD = $(top_builddir)/libapprovaltestcpp-0.9.0.la $(top_builddir)/dependencies/gtest-1.7.0/lib/.libs/libgtest.a
