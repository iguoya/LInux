#ifndef TST_HELLO_H
#define TST_HELLO_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../App/hello.h"
using namespace testing;

TEST(AppTest, Hello)
{
    EXPECT_EQ(1, 1);
    Hello h;
    EXPECT_EQ(h.add(4, 5), 900);
    ASSERT_THAT(0, Eq(0));
}

TEST(AppTest, add)
{
    Hello h;
    EXPECT_EQ(h.add(5, 5), 1000);
    ASSERT_THAT(0, Eq(0));
}


#endif // TST_HELLO_H
