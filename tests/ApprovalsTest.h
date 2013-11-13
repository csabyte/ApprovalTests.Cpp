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

TEST(ApprovalsTest, testVerify) {
  Approvals approvals;
  approvals.verify("verify int length");
}

#endif /* APPROVALSTEST_H_ */
