//week04-2.cpp
//LeetCode 學習計畫：第10題896 Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) dec = false; // 不可能是單調遞減
            if (nums[i] < nums[i-1]) inc = false; // 不可能是單調遞增
        }
        return inc || dec; // 只要有一種成立就 true
    }
};
