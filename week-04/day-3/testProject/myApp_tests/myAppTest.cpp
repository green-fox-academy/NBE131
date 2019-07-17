#include <gtest/gtest.h>
#include "myClass.h"

class AppleTest : public ::testing::Test {
protected:
    //executed before every test
    void SetUp() override {

    }
    void TearDown() override {}

    myClass _apple;
};

TEST_F(AppleTest, Apple) {

    ASSERT_EQ(_apple.getApple(), "apple");
}



