/*
 * ApprovalsTest.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef APPROVALSTEST_H_
#define APPROVALSTEST_H_

#include "gtest/gtest.h"
#include "Approvals.h"
#include "IApprovable.h"

TEST(ApprovalsTest, testVerify) {
    Approvals::verify("verify my name\nThis is an approval test.");
}

class MyTestClass : public IApprovable {
    public:
        std::string toString() {return "hello approvals";}
};

TEST(ApprovalsTest, testApprovalableObject) {
    MyTestClass testObj;
    Approvals::verify(&testObj);
}

#endif /* APPROVALSTEST_H_ */
