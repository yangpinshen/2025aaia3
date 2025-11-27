//week12-2
/// LeetCode 976. Largest Perimeter Triangle
// 找可構成三角形的三邊長,加起來最大 兩邊和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 先(有效率的排序)

        // 先練習倒過來的迴圈,把大到小印出來 (現在改成實際邏輯)
        // 注意：這裡 i 改成 >= 2，因為我們一次需要看 nums[i], nums[i-1], nums[i-2]
        for (int i = nums.size() - 1; i >= 2; i--) {

            // 檢查是否符合三角形定義：兩小邊之和 > 最大邊
            if (nums[i-1] + nums[i-2] > nums[i]) {
                // 因為是從最大的開始找，第一個找到的一定是周長最大的
                return nums[i-1] + nums[i-2] + nums[i];
            }
        }

        return 0; // 找不到答案, return 0
    }
};
