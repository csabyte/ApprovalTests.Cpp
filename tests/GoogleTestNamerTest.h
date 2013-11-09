/*
 * GoogleTestNamerTest.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef GOOGLETESTNAMERTEST_H_
#define GOOGLETESTNAMERTEST_H_

#include "gtest/gtest.h"
#include "GoogleTestNamer.h"

// Fixture for testing class GoogleTestNamer.
class NamerTest : public ::testing::Test {
	protected:
		NamerTest() : mNamer(0) {}
		virtual ~NamerTest() {}
		virtual void SetUp() {
			mNamer = new GoogleTestNamer();
		}
		virtual void TearDown() {
			delete mNamer;
		}

		GoogleTestNamer* mNamer;
};

TEST_F(NamerTest, testTestCaseName) {
	EXPECT_EQ("NamerTest", mNamer->getTestCaseName());
}

TEST_F(NamerTest, testTestName) {
	EXPECT_EQ("testTestName", mNamer->getTestName());
}

TEST_F(NamerTest, testApprovalName) {
	EXPECT_EQ("NamerTest.testApprovalName.approved.txt", mNamer->getApprovalName());
}

#endif /* GOOGLETESTNAMERTEST_H_ */
