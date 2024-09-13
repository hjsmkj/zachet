#include <gtest/gtest.h>
#include "function.hpp"

TEST(FunctionTests, PositiveNums) {
    EXPECT_EQ(function(1, 2), 5); // 1 + 2 * (1 + 1) = 5
    EXPECT_EQ(function(2, 3), 11); // 2 + 3 * (2 + 1) = 11
}

TEST(FunctionTests, NegativeAndZeroNums) {
    EXPECT_EQ(function(0, 0), 0); // 0 + 0 * (0 + 1) = 0
    EXPECT_EQ(function(-1, 1), -1); // -1 + 1 * (-1 + 1) = -1
    EXPECT_EQ(function(-2, -2), 0); // -2 + (-2) * (-2 + 1) = 0
}

TEST(FunctionTests, Scobki) {
    EXPECT_EQ(function(100, 0), 100); // 100 + 0 * (100 + 1) = 100
    EXPECT_EQ(function(0, 100), 100); // 0 + 100 * (0 + 1) = 100
}
