#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAns(int n, vector<int> nums) {
    int pre = 0, maxAns = nums[0];
    for (const auto& x : nums) {
        pre = max(pre + x, x);
        maxAns = max(maxAns, pre);
    }
    return maxAns;
}

int main() {
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num); // 将输入的数字添加到 nums 向量中
    }

    cout << "最大连续子数组和为：" << maxAns(n, nums) << endl;
    return 0;
}
