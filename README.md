#include <iostream>

    size_t size = nums.size();
    if (size % 2 == 0) {
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
        return nums[size / 2];
    }
}

// 7. New list with even numbers removed
std::vector<int> removeEvens(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int n : nums) {
        if (n % 2 != 0) result.push_back(n);
    }
    ret
