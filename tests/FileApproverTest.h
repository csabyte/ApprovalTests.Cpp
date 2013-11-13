/*
 * FileApproverTest.h
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */

#ifndef FILEAPPROVERTEST_H_
#define FILEAPPROVERTEST_H_

#include "gtest/gtest.h"
#include "FileApprover.h"

TEST(FileApproverTest, testCtor) {
    FileApprover approver(new ApprovalTextWriter("This is a text.")
                        , new GoogleTestNamer());
}

#endif /* FILEAPPROVERTEST_H_ */
