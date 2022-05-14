#ifndef TST_FACTORIAL_H
#define TST_FACTORIAL_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../App/sample1.h"
using namespace testing;

TEST(FactorialTest, Negative) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
}

TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}

TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(Factorial(5), 120);
//  EXPECT_EQ(Factorial(5), 121);
  EXPECT_EQ(40320, Factorial(8));
}




#endif // TST_FACTORIAL_H
