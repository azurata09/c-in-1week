#include "gtest/gtest.h"
#include "prob2.h"

TEST(Prob2Test, Prob2_1_Correct) {
  auto expected = "a=b=a + b = 13\na - b = 5\na * b = 36\na / b = 2\na % b = 1\n";

  // stdin を "input.txt" に切り替え
  ASSERT_NE(freopen("./test/cases/prob2_1", "r", stdin), nullptr) << "テストケースの準備に失敗しました。";

  testing::internal::CaptureStdout();

  prob2_1();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), expected);
}

TEST(Prob2Test, Prob2_2_Correct) {
  auto expected = "長方形の幅：長方形の高さ：長方形の面積は、36m2です。\n";

  // stdin を "input.txt" に切り替え
  ASSERT_NE(freopen("./test/cases/prob2_2", "r", stdin), nullptr) << "テストケースの準備に失敗しました。";

  testing::internal::CaptureStdout();

  prob2_2();

  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_STREQ(output.c_str(), expected);
}