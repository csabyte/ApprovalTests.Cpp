/*
 * GenericDiffReporterTest.h
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */

#ifndef GENERICDIFFREPORTERTEST_H_
#define GENERICDIFFREPORTERTEST_H_

#include "gtest/gtest.h"
#include "GenericDiffReporter.h"

// Fixture for testing class GenericDiffReporter.
class GenericDiffReporterTest : public ::testing::Test {
    protected:
        GenericDiffReporterTest() : mReporter(0) {}
        virtual ~GenericDiffReporterTest() {}
        virtual void SetUp() {
            mReporter = new GenericDiffReporter("TkDiff", "TkDiff not found.");
        }
        virtual void TearDown() {
            delete mReporter;
        }

        GenericDiffReporter* mReporter;
};


TEST_F(GenericDiffReporterTest, testCtor) {
    EXPECT_EQ(5, mReporter->mValidExtensions.size());
}

TEST_F(GenericDiffReporterTest, testIsExtensionValidForTxt) {
    EXPECT_EQ(true, mReporter->isExtensionValid("filename.txt"));
}

TEST_F(GenericDiffReporterTest, testIsExtensionValidForTxtWithPath) {
    EXPECT_EQ(true, mReporter->isExtensionValid("/root/mydir/filename.txt"));
}

TEST_F(GenericDiffReporterTest, testIsExtensionValidForGzip) {
    EXPECT_EQ(false, mReporter->isExtensionValid("filename.gzip"));
}

TEST_F(GenericDiffReporterTest, testIsPwdCommandExist) {
    EXPECT_EQ(true, mReporter->isCommandExist("/bin/pwd"));
}

TEST_F(GenericDiffReporterTest, testIsQwertyCommandExist) {
    EXPECT_EQ(false, mReporter->isCommandExist("/bin/qwertycmd"));
}

TEST(GenericDiffReporter, testIfMyFileWorkingInThisEnvironment) {
    GenericDiffReporter reporter("/bin/cat", "cat not found.");
    EXPECT_EQ(true, reporter.isWorkingInThisEnvironment("myfile.txt"));
}

TEST(GenericDiffReporter, testIfMyFileWorkingWithNotExistingCmd) {
    GenericDiffReporter reporter("/usr/bin/cmdNotExist", "cmdNotExist not found.");
    EXPECT_EQ(false, reporter.isWorkingInThisEnvironment("myfile.txt"));
}

TEST(GenericDiffReporter, testCommandLine) {
    GenericDiffReporter reporter("/usr/bin/diff", "diff not found.");
    EXPECT_EQ("/usr/bin/diff myfile.received.txt myfile.approval.txt"
            , reporter.getCommandLine("myfile.received.txt", "myfile.approval.txt"));
}

#endif /* GENERICDIFFREPORTERTEST_H_ */
