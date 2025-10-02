//week04-3.cpp
//leecode 學習計畫第七題 66. plus one


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // 直接加 1，不會進位
                return digits; // 結束
            }
            digits[i] = 0; // 需要進位，該位歸零
        }
        // 若全部都是 9，例如 [9,9,9] → [0,0,0]，最後要補 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
