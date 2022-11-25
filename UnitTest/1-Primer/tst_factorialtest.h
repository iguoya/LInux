#ifndef TST_s.FactorialTEST_H
#define TST_s.FactorialTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "sample1.h"

using namespace testing;

//TEST(Primer, s.FactorialTest)
//{
//    EXPECT_EQ(1, 1);
//    ASSERT_THAT(0, Eq(0));
//}

TEST(FactorialTest, Negative) {
    // This test is named "Negative", and belongs to the "s.FactorialTest"
    // test case.
    sample1 s;
    EXPECT_EQ(1, s.Factorial(-5));
    EXPECT_EQ(1, s.Factorial(-1));
    EXPECT_GT(s.Factorial(-10), 0);

    // <TechnicalDetails>
    //
    // EXPECT_EQ(expected, actual) is the same as
    //
    //   EXPECT_TRUE((expected) == (actual))
    //
    // except that it will print both the expected value and the actual
    // value when the assertion fails.  This is very helpful for
    // debugging.  Therefore in this case EXPECT_EQ is preferred.
    //
    // On the other hand, EXPECT_TRUE accepts any Boolean expression,
    // and is thus more general.
    //
    // </TechnicalDetails>
}

// Tests s.Factorial of 0.
TEST(FactorialTest, Zero) {
    sample1 s;
    EXPECT_EQ(1, s.Factorial(0));
}

// Tests s.Factorial of positive numbers.
TEST(FactorialTest, Positive) {
    sample1 s;
    EXPECT_EQ(1, s.Factorial(1));
    EXPECT_EQ(2, s.Factorial(2));
    EXPECT_EQ(6, s.Factorial(3));
    EXPECT_EQ(40320, s.Factorial(8));
}


// Tests s.IsPrime()

// Tests negative input.
TEST(IsPrimeTest, Negative) {
    // This test belongs to the IsPrimeTest test case.
    sample1 s;
    EXPECT_FALSE(s.IsPrime(-1));
    EXPECT_FALSE(s.IsPrime(-2));
//    EXPECT_FALSE(s.IsPrime(INT_MIN));
}

// Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
    sample1 s;
    EXPECT_FALSE(s.IsPrime(0));
    EXPECT_FALSE(s.IsPrime(1));
    EXPECT_TRUE(s.IsPrime(2));
    EXPECT_TRUE(s.IsPrime(3));
}

// Tests positive input.
TEST(IsPrimeTest, Positive) {
    sample1 s;
    EXPECT_FALSE(s.IsPrime(4));
    EXPECT_TRUE(s.IsPrime(5));
    EXPECT_FALSE(s.IsPrime(6));
    EXPECT_TRUE(s.IsPrime(23));
}


#endif // TST_s.FactorialTEST_H
