#include <gtest/gtest.h>
#include "function.hpp"

TEST(FunctionTests, PositiveNums) {
    EXPECT_EQ(function(1, 2), 4); // 1 + 2 * (1 + 1) = 4
    EXPECT_EQ(function(2, 3), 8); // 2 + 3 * (2 + 1) = 11
}

TEST(FunctionTests, NegativeAndZeroNums) {
    EXPECT_EQ(function(0, 0), 0); // 0 + 0 * (0 + 1) = 0
    EXPECT_EQ(function(-1, 1), 0); // -1 + 1 * (-1 + 1) = -1
    EXPECT_EQ(function(-2, -2), -8); // -2 + (-2) * (-2 + 1) = -2
}

TEST(FunctionTests, Scobki) {
    EXPECT_EQ(function(100, 0), 10000); // 100 + 0 * (100 + 1) = 100
    EXPECT_EQ(function(0, 100), 0); // 0 + 100 * (0 + 1) = 100
}
