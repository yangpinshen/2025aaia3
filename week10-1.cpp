// week10-1.cpp 第2次，第1次用迴圈，第2次用數學
// 1523. Count Odd Numbers in an Interval Range
// 從 low ... high 裡面有幾個奇數?
class Solution {
public:
    int countOdds(int low, int high) {
        // 使用數學公式：
        // (high + 1) / 2 計算 [1, high] 中奇數的個數
        // low / 2 計算 [1, low - 1] 中奇數的個數
        // 兩者相減即為 [low, high] 區間的奇數個數
        return (high + 1) / 2 - low / 2;
    }
};
