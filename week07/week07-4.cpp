#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        // 0: North (北), 1: East (東), 2: South (南), 3: West (西)
        int direction = 0;

        // 方向向量: {{dx, dy}}
        // 對應於方向 0, 1, 2, 3
        vector<vector<int>> directions = {
            {0, 1},  // North
            {1, 0},  // East
            {0, -1}, // South
            {-1, 0}  // West
        };

        // 機器人起始位置
        int x = 0;
        int y = 0;

        // 模擬執行一輪指令
        for (char instruction : instructions) {
            if (instruction == 'G') {
                // 'G': 向前移動
                x += directions[direction][0];
                y += directions[direction][1];
            } else if (instruction == 'L') {
                // 'L': 向左轉 90 度 (逆時針)
                // 由於方向是 N(0) -> E(1) -> S(2) -> W(3) (順時針)，
                // 逆時針轉向相當於 d 減 1，為避免負數，使用 (d + 3) % 4
                direction = (direction + 3) % 4;
            } else { // instruction == 'R'
                // 'R': 向右轉 90 度 (順時針)
                // d 加 1
                direction = (direction + 1) % 4;
            }
        }

        // 判斷是否會被困在有限圓圈內:
        // 1. 回到原點 (x=0, y=0)
        // 2. 或方向發生改變 (direction != 0)
        if ((x == 0 && y == 0) || direction != 0) {
            return true;
        }

        // 否則，機器人會持續面向北方無限前進
        return false;
    }
};
