#include <iostream>
#include "gtest/gtest.h"
#include "Approvals.h"
using namespace std;


TEST(ApprovalsTest, testVerify) {
  Approvals approvals;
  EXPECT_EQ(20, approvals.verify("verify string length"));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

