# Instruct aclocal to check the cfg directory for
# extra macros
ACLOCAL_AMFLAGS=-I cfg

# Build the library in the gtest-1.7.0 subdirectory first.
SUBDIRS = dependencies/gtest-1.7.0

# Include gtest-1.7.0's header when compiling this directory.
AM_CPPFLAGS = -I$(srcdir)/dependencies/gtest-1.7.0/include

bin_PROGRAMS = approval
approval_SOURCES = src/main.cpp

# link with the gtest-1.7.0 library.
approval_LDADD = dependencies/gtest-1.7.0/lib/.libs/libgtest.a
