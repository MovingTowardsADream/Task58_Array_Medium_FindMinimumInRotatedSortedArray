#include <iostream>
#include <vector>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int left = 0, right = nums.size() - 1, middle;
        while (left + 1 < right) {
            middle = (left + right) / 2;
            if (nums[middle] < nums[0]) {
                right = middle;
            }
            else {
                left = middle;
            }
        }
        return std::min(std::min(nums[left], nums[right]), nums[0]);
    }
};
