/*
 * GoogleTestNamer.h
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#ifndef GOOGLETESTNAMER_H_
#define GOOGLETESTNAMER_H_

#include "gtest/gtest.h"
#include "INamer.h"

class GoogleTestNamer : public INamer {
public:
	GoogleTestNamer();
	virtual ~GoogleTestNamer();
	virtual std::string getApprovalName();

	private:
		FRIEND_TEST(NamerTest, testTestCaseName);
		FRIEND_TEST(NamerTest, testTestName);

		std::string getTestCaseName() const;
		std::string getTestName() const;

		// Variables
		const ::testing::TestInfo* mGTestInfo;

};

#endif /* GOOGLETESTNAMER_H_ */
