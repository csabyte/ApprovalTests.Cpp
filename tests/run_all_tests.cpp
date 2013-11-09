#include <iostream>
#include "gtest/gtest.h"
#include "ApprovalsTest.h"
#include "GoogleTestNamerTest.h"
#include "ApprovalTextWriterTest.h"
using namespace std;

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

