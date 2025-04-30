#include "gtest/gtest.h"
#include "prob1.h"
#include <stdio.h>

void prob1_2before() {
  printf("123\n");
  printf("456\n");
  printf("789\n");
}

TEST(Prob1Test, CorrectProb1_1) {
  testing::internal::CaptureStdout();
  prob1_1();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "etrobo-fun\n");
}

TEST(Prob1Test, CorrectProb1_2) {
  testing::internal::CaptureStdout();
  prob1_2();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "123\n456\n789\n");
}

TEST(Prob1Test, CorrectProb1_3) {
  testing::internal::CaptureStdout();
  prob1_3();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "etrobo-fun\n");
}

TEST(Prob1Test, CorrectProb1_4) {
  testing::internal::CaptureStdout();
  prob1_4();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), "etrobo-fun\n");
}
