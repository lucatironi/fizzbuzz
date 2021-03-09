#include <gtest/gtest.h>

#include <iostream>

#include "fizzbuzz.h"

TEST(myfunctions, fizzbuzz)
{
    GTEST_ASSERT_EQ(fizzbuzz(0), "0");
    GTEST_ASSERT_EQ(fizzbuzz(1), "1");
    GTEST_ASSERT_EQ(fizzbuzz(2), "2");
    GTEST_ASSERT_EQ(fizzbuzz(3), "Fizz");
    GTEST_ASSERT_EQ(fizzbuzz(4), "4");
    GTEST_ASSERT_EQ(fizzbuzz(5), "Buzz");
    GTEST_ASSERT_EQ(fizzbuzz(6), "Fizz");
    GTEST_ASSERT_EQ(fizzbuzz(7), "7");
    GTEST_ASSERT_EQ(fizzbuzz(8), "8");
    GTEST_ASSERT_EQ(fizzbuzz(9), "Fizz");
    GTEST_ASSERT_EQ(fizzbuzz(10), "Buzz");
    GTEST_ASSERT_EQ(fizzbuzz(11), "11");
    GTEST_ASSERT_EQ(fizzbuzz(12), "Fizz");
    GTEST_ASSERT_EQ(fizzbuzz(13), "13");
    GTEST_ASSERT_EQ(fizzbuzz(14), "14");
    GTEST_ASSERT_EQ(fizzbuzz(15), "FizzBuzz");
}

int main(int argc, char* argv[])
{
     for (int i = 0; i < 100; i++)
    {
        std::cout << fizzbuzz(i) << std::endl;
    }

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
