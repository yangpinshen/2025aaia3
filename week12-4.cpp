//week12-4

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // 只有兩個點，一定是一條直線
        if (coordinates.size() <= 2) return true;

        // 1. 取得前兩個點的座標
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];

        // 2. 計算基準的 delta X 和 delta Y (這代表這條線的走勢)
        int dx = x1 - x0;
        int dy = y1 - y0;

        // 3. 從第 3 個點開始檢查 (index 2)
        for (int i = 2; i < coordinates.size(); i++) {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];

            // 計算目前點相對於 P0 的 delta
            int dxi = xi - x0;
            int dyi = yi - y0;

            // 4. 使用交叉相乘檢查斜率是否相等
            // 原本邏輯: dy / dx == dyi / dxi
            // 交叉相乘: dy * dxi == dyi * dx
            if ((long long)dy * dxi != (long long)dyi * dx) {
                return false; // 斜率不同，不是直線
            }
        }

        return true;
    }
};
