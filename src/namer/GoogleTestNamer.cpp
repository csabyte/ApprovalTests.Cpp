/*
 * GoogleTestNamer.cpp
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#include "GoogleTestNamer.h"

const std::string cDelimiter = ".";

GoogleTestNamer::GoogleTestNamer()
: mGTestInfo(0)
{
	mGTestInfo = ::testing::UnitTest::GetInstance()->current_test_info();
	assert(mGTestInfo != 0);  // please call it from google test case
}

GoogleTestNamer::~GoogleTestNamer() {
}

std::string GoogleTestNamer::getApprovalName() {
	std::string sOut;
	if (mGTestInfo) {
		sOut = getTestCaseName() + cDelimiter + getTestName()
				+ cDelimiter + "approved" + ".txt";
	}
	return sOut;
}


//***********************************************************
// private methods
//***********************************************************
std::string GoogleTestNamer::getTestCaseName() const {
	return mGTestInfo->test_case_name();
}

std::string GoogleTestNamer::getTestName() const {
	return mGTestInfo->name();
}
