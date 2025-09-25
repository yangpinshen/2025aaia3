// week03-3a.cpp 第二種方法 把不是0的找出來，暫放ans，再放回去
// LeetCode 學習計畫 283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // 用來放「不是0的數」
        // 找出所有不是0的數
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) ans.push_back(nums[i]);
        }
        // 上面把「不是0的數」暫時放在 ans 裡，等一下再塞回去
        // 再用 for 回圈回去
        for(int i=0; i<nums.size(); i++) {
            if(i < ans.size()) nums[i] = ans[i]; // 塞回去
            else nums[i] = 0; // 其他的放0
        }
    }
};
