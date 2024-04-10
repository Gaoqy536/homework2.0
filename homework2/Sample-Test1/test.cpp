#include "pch.h"
#include <vector>
#include <algorithm>
#include "gtest/gtest.h"
using namespace std;
int maxAns(int n, vector<int> nums) {
    int pre = 0, maxAns = nums[0];
    for (const auto& x : nums) {
        pre = max(pre + x, x);
        maxAns = max(maxAns, pre);
    }
    return maxAns;
}
TEST(MaxSubarrayTest, BasicTest0) {
    vector<int>nums = { 1, -2, 3, -4, 5 };
    EXPECT_EQ(maxAns(5,nums), 5);

}
TEST(MaxSubarrayTest, BasicTest1) {
   vector <int> nums = { 2, 4, -3, 5 };

    EXPECT_EQ(maxAns(4,nums), 8);

}
TEST(MaxSubarrayTest, BasicTest2) {
    vector<int> nums = { -1, -2, -3, -4, -5, -6 };

    EXPECT_EQ(maxAns(6, nums), -1);
}


TEST(MaxSubarrayTest, BasicTest3) {
    vector<int> nums = { 0, 0, 0 };

    EXPECT_EQ(maxAns(3, nums), 0);
}

int main(int argc, char** argv) {
    // 初始化 Google Test 框架
    ::testing::InitGoogleTest(&argc, argv);
    // 运行所有测试用例
    return RUN_ALL_TESTS();
}