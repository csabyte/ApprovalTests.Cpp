#include <iostream>
#include "gtest/gtest.h"
#include "ApprovalsTest.h"
#include "GoogleTestNamerTest.h"
#include "ApprovalTextWriterTest.h"
#include "GenericDiffReporterTest.h"

using namespace std;

TEST(ApprovalTest, testVerify) {
    Approvals approvals;
    approvals.verify("This is an approvable content");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

