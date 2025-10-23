#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        // 0: North (�_), 1: East (�F), 2: South (�n), 3: West (��)
        int direction = 0;

        // ��V�V�q: {{dx, dy}}
        // �������V 0, 1, 2, 3
        vector<vector<int>> directions = {
            {0, 1},  // North
            {1, 0},  // East
            {0, -1}, // South
            {-1, 0}  // West
        };

        // �����H�_�l��m
        int x = 0;
        int y = 0;

        // ��������@�����O
        for (char instruction : instructions) {
            if (instruction == 'G') {
                // 'G': �V�e����
                x += directions[direction][0];
                y += directions[direction][1];
            } else if (instruction == 'L') {
                // 'L': �V���� 90 �� (�f�ɰw)
                // �ѩ��V�O N(0) -> E(1) -> S(2) -> W(3) (���ɰw)�A
                // �f�ɰw��V�۷�� d �� 1�A���קK�t�ơA�ϥ� (d + 3) % 4
                direction = (direction + 3) % 4;
            } else { // instruction == 'R'
                // 'R': �V�k�� 90 �� (���ɰw)
                // d �[ 1
                direction = (direction + 1) % 4;
            }
        }

        // �P�_�O�_�|�Q�x�b������餺:
        // 1. �^����I (x=0, y=0)
        // 2. �Τ�V�o�ͧ��� (direction != 0)
        if ((x == 0 && y == 0) || direction != 0) {
            return true;
        }

        // �_�h�A�����H�|���򭱦V�_��L���e�i
        return false;
    }
};
