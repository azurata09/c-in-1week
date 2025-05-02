#include "gtest/gtest.h"
#include "prob1.h"
#include <stdio.h>

TEST(Prob1Test, Prob1_1_Correct) {
  testing::internal::CaptureStdout();

  prob1_1();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "etrobo-fun\n");
}

TEST(Prob1Test, Prob1_2_Correct) {
  testing::internal::CaptureStdout();

  prob1_2();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "123\n456\n789\n");
}

TEST(Prob1Test, Prob1_3_Correct) {
  testing::internal::CaptureStdout();

  prob1_3();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "1 + 1 = 2\n2 + 3 = 5\n");
}

TEST(Prob1Test, Prob1_4_Correct) {
  testing::internal::CaptureStdout();

  prob1_4();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "1 + 2 + 3 = 6\n");
}
