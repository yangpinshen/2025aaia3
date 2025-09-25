// week03-2b.cpp   二合一 要寫 2 次
// LeetCode 練習計畫第 8 題 1822. Sign of the Product of an Array
// 把陣列乘起來，看是正數、負數，還是 0
// 改良版：不是真的去乘 nums[i]，只乘 ±1 或 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        // 初始值設為 1，因為 0 乘任何數都是 0
        // 所以只需要管正負號

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) ans *= +1;  // 正數 → 不影響
            if(nums[i] < 0) ans *= -1;  // 負數 → 翻轉正負號
            if(nums[i] == 0) ans *= 0;  // 有 0 → 直接變成 0
        }

        if(ans > 0) return 1;   // 乘積 > 0 → 回傳 1
        if(ans < 0) return -1;  // 乘積 < 0 → 回傳 -1
        return 0;               // 乘積 = 0 → 回傳 0
    }
};
