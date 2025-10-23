#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    // �ˬd���w���a (player) �O�_���
    // player: 1 for 'X' (A), -1 for 'O' (B)
    bool check_win(const vector<vector<int>>& board, int player) {
        // �ˬd��
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
                return true;
            }
        }

        // �ˬd�C
        for (int j = 0; j < 3; ++j) {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
                return true;
            }
        }

        // �ˬd�D�﨤�u
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
        }

        // �ˬd�ƹ﨤�u
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            return true;
        }

        return false;
    }

public:
    string tictactoe(vector<vector<int>>& moves) {
        // �ϥ� 3x3 �ѽL�A0 ��ܪšA1 ��� A ('X')�A-1 ��� B ('O')
        vector<vector<int>> board(3, vector<int>(3, 0));
        int n = moves.size();

        for (int i = 0; i < n; ++i) {
            int r = moves[i][0];
            int c = moves[i][1];

            // ���a A �`�O���� (i = 0, 2, 4, ...)
            int current_player = (i % 2 == 0) ? 1 : -1;

            board[r][c] = current_player;

            // �C�������ܤ֨� 5 �B�~�i�঳�H���
            if (i >= 4) {
                if (check_win(board, current_player)) {
                    // �p�G���H��ӡA�^�ǹ��������a
                    return (current_player == 1) ? "A" : "B";
                }
            }
        }

        // �M�����Ҧ� moves �B�L�H���
        if (n == 9) {
            // �ѽL�w���A����
            return "Draw";
        } else {
            // �ѽL�����A�C���i�椤
            return "Pending";
        }
    }
};
