#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    // 檢查指定玩家 (player) 是否獲勝
    // player: 1 for 'X' (A), -1 for 'O' (B)
    bool check_win(const vector<vector<int>>& board, int player) {
        // 檢查行
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
                return true;
            }
        }

        // 檢查列
        for (int j = 0; j < 3; ++j) {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
                return true;
            }
        }

        // 檢查主對角線
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
        }

        // 檢查副對角線
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            return true;
        }

        return false;
    }

public:
    string tictactoe(vector<vector<int>>& moves) {
        // 使用 3x3 棋盤，0 表示空，1 表示 A ('X')，-1 表示 B ('O')
        vector<vector<int>> board(3, vector<int>(3, 0));
        int n = moves.size();

        for (int i = 0; i < n; ++i) {
            int r = moves[i][0];
            int c = moves[i][1];

            // 玩家 A 總是先走 (i = 0, 2, 4, ...)
            int current_player = (i % 2 == 0) ? 1 : -1;

            board[r][c] = current_player;

            // 遊戲必須至少走 5 步才可能有人獲勝
            if (i >= 4) {
                if (check_win(board, current_player)) {
                    // 如果有人獲勝，回傳對應的玩家
                    return (current_player == 1) ? "A" : "B";
                }
            }
        }

        // 遍歷完所有 moves 且無人獲勝
        if (n == 9) {
            // 棋盤已滿，平局
            return "Draw";
        } else {
            // 棋盤未滿，遊戲進行中
            return "Pending";
        }
    }
};
