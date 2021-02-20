#include "gtest/gtest.h"
#include "../ts.h"
#include <vector>

void runTest(const std::vector<int>& nums, int target, const std::vector<int>& expected)
{
    EXPECT_EQ(twoSum(nums, target), expected);
}

TEST(TwoSumTest, Sample1) {
    runTest({2, 7, 1, 15}, 9, {0 ,1});
}

TEST(TwoSumTest, Sample2) {
    runTest({3, 2, 4}, 6, {1, 2});
}

TEST(TwoSumTest, Sample3) {
    runTest({3, 3}, 6, {0, 1});
}
