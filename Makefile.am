# Instruct aclocal to check the cfg directory for
# extra macros
ACLOCAL_AMFLAGS=-I cfg

# Build the library in the gtest-1.7.0 subdirectory first.
SUBDIRS = dependencies/gtest-1.7.0 . tests

# Include gtest-1.7.0's header when compiling this directory.
AM_CPPFLAGS = -I$(srcdir)/dependencies/gtest-1.7.0/include -I$(srcdir)/include

lib_LTLIBRARIES = libapprovaltestcpp-0.9.0.la
libapprovaltestcpp_0_9_0_la_SOURCES = src/approvers/Approvals.cpp src/namer/GoogleTestNamer.cpp src/writer/ApprovalTextWriter.cpp src/utils/FileUtils.cpp src/reporters/GenericDiffReporter.cpp src/reporters/Kdiff3Reporter.cpp src/approvers/FileApprover.cpp src/reporters/DiffMergeReporter.cpp src/reporters/FirstWorkingReporter.cpp
include_HEADERS = include/Approvals.h include/GoogleTestNamer.h include/ApprovalTextWriter.h include/FileUtils.h include/FileApprover.h

# link with the gtest-1.7.0 library.
approval_LDADD = dependencies/gtest-1.7.0/lib/.libs/libgtest.a

