//week12-5
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        // 1. 先排序 (O(N log N))
        // 排序後，如果是等差數列，相鄰元素的差一定要固定
        sort(arr.begin(), arr.end());

        // 2. 算出預期的公差 (第2個數 - 第1個數)
        int diff = arr[1] - arr[0];

        // 3. 從第 3 個數 (index 2) 開始檢查
        for (int i = 2; i < arr.size(); i++) {
            // 如果這一對的差，跟公差不一樣，就失敗
            if (arr[i] - arr[i-1] != diff) {
                return false;
            }
        }

        // 4. 全部檢查通過
        return true;
    }
};
