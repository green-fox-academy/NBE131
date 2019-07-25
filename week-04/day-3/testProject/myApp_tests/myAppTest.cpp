#include <gtest/gtest.h>
#include "myFunctionsToTest.h"
#include <vector>

class MyAppTests : public ::testing::Test
{
protected:
    //executed before every test
    void SetUp() override
    {

    }

    void TearDown() override
    {}


};

TEST_F(MyAppTests, Apple)
{
    myFunctionsToTest _apple;
    ASSERT_EQ(_apple.getApple(), "apple");
}


TEST_F(MyAppTests, SumMultipleElementsList)
{
    myFunctionsToTest _sum;
    std::vector<int> _inputVector = {
            1, 3, 23, 12, 10
    };
    ASSERT_EQ(_sum.sum(_inputVector), 49);
}


TEST_F(MyAppTests, SumEmptyList)
{
    myFunctionsToTest _sum;
    std::vector<int> _inputVector = {

    };
    ASSERT_EQ(_sum.sum(_inputVector), 0);
}


TEST_F(MyAppTests, SumOneElementList)
{
    myFunctionsToTest _sum;
    std::vector<int> _inputVector = {
            -2
    };
    ASSERT_EQ(_sum.sum(_inputVector), -2);
}


TEST_F(MyAppTests, SumNegativeSum)
{
    myFunctionsToTest _sum;
    std::vector<int> _inputVector = {
            -2, -5, 3, -11, 9
    };
    ASSERT_EQ(_sum.sum(_inputVector), -6);
}


TEST_F(MyAppTests, IsAnagram1)
{
    myFunctionsToTest _anagram;

    ASSERT_EQ(_anagram.isAnagram("gran ama", "an agram"), 1);
}

TEST_F(MyAppTests, Fibonacci0)
{
    myFunctionsToTest _fibonacci;

    ASSERT_EQ(_fibonacci.fibonacci(0), 0);
}

TEST_F(MyAppTests, Fibonacci1)
{
    myFunctionsToTest _fibonacci;

    ASSERT_EQ(_fibonacci.fibonacci(1), 0);
}


TEST_F(MyAppTests, Fibonacci1plus)
{
    myFunctionsToTest _fibonacci;

    ASSERT_EQ(_fibonacci.fibonacci(10), 34);
}