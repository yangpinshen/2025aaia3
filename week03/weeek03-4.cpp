// week03-4.cpp
// LeetCode �D���D (�ȿ���) 120. Triangle ���q�̤W�����U�����̤p��
class Solution { // �ϥ� "�ʺA�W��" �C�C��s�}�C�N�n�F
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle[i][j] ��i�h����j�Ӽ�
        int N = triangle.size(); // �`�@���X�h
        // �q�U���W�d, �̤U������ N-1�h, �S���D, �N�O�������̤p�� �ҥH��N-2���W��s
        for(int i=N-2; i>=0; i--){ // �˹L�Ӫ��j��, �qN-2���W
            for(int j=0; j<=i; j++){
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                //�C�ӤH, �n�ݥ��U��2�ӿ��(���U��B�U�谾�k), ��̤p�����@��
            }
        }
        return triangle[0][0];
    }
};
