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
  approvals.verify("verify my name\nThis is an approval test.");
}

#endif /* APPROVALSTEST_H_ */
