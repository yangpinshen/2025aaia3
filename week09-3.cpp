// week09-2.cpp 學習寫出 Matrix 第 2 題
// LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        // M: 矩陣的行數 (rows)，N: 矩陣的列數 (columns)
        int M = mat.size();
        int N = mat[0].size(); // 在 LeetCode 1572 題中，矩陣是 n x n 的正方形矩陣，所以 M == N

        int ans = 0;

        // 遍歷矩陣的每一行
        for (int i = 0; i < M; i++) {
            // j 的迴圈可以省略，因為對角線元素的位置 i 和 j 是有關係的
            // for (int j = 0; j < N; j++) {

            // 1. 計算主對角線元素 (i == j)
            ans += mat[i][i];

            // 2. 計算副對角線元素 (i + j == N - 1, 所以 j = N - 1 - i)
            //    注意：必須排除中心點，避免重複計算。中心點的條件是 i == N - 1 - i
            int j_secondary = N - 1 - i;

            if (i != j_secondary) { // 如果 i 不等於 j_secondary (即 i != N - 1 - i)，則不是中心點
                ans += mat[i][j_secondary];
            }
        }

        return ans;
    }
};
