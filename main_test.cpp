#include <gtest/gtest.h>

int add(int a, int b) {
  printf("I am here\n");
  return a + b;
}

TEST(AdditionTest, CanAddTwoNumbers) {
  int t = add(2, 5);
  EXPECT_EQ(t, 7);
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
