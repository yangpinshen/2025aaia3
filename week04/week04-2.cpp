//week04-2.cpp
//LeetCode �ǲ߭p�e�G��10�D896 Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) dec = false; // ���i��O��ջ���
            if (nums[i] < nums[i-1]) inc = false; // ���i��O��ջ��W
        }
        return inc || dec; // �u�n���@�ئ��ߴN true
    }
};
