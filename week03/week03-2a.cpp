// week03-2a.cpp   �G�X�@�A�n�g 2 ��
// LeetCode �m�߭p�e�� 8 �D 1822. Sign of the Product of an Array
// ��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        // �]�� 0 ������Ƴ��|�ܦ� 0
        // �ҥH��l�ȥ� 1�A������~�|���T����

        for(int i = 0; i < nums.size(); i++) {
            ans *= nums[i];  // ��C�Ӥ����ۭ�
        }//�Ʀr�V���V�j 1000�ӼƦr ����@�b �z��

        if(ans > 0) return 1;   // ���� �� �^�� 1
        if(ans < 0) return -1;  // �t�� �� �^�� -1
        return 0;               // �]�t 0 �� �^�� 0
    }
};
