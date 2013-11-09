TESTS = run_all_tests
bin_PROGRAMS = run_all_tests
run_all_tests_SOURCES = run_all_tests.cpp 
AM_CPPFLAGS = -I$(top_srcdir)/dependencies/gtest-1.7.0/include -I$(top_srcdir)/include
run_all_tests_LDADD = $(top_builddir)/libapprovaltestcpp-0.9.0.la $(top_builddir)/dependencies/gtest-1.7.0/lib/.libs/libgtest.a
