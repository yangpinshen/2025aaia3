// week03-2b.cpp   �G�X�@ �n�g 2 ��
// LeetCode �m�߭p�e�� 8 �D 1822. Sign of the Product of an Array
// ��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O 0
// ��}���G���O�u���h�� nums[i]�A�u�� ��1 �� 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        // ��l�ȳ]�� 1�A�]�� 0 ������Ƴ��O 0
        // �ҥH�u�ݭn�ޥ��t��

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) ans *= +1;  // ���� �� ���v�T
            if(nums[i] < 0) ans *= -1;  // �t�� �� ½�ॿ�t��
            if(nums[i] == 0) ans *= 0;  // �� 0 �� �����ܦ� 0
        }

        if(ans > 0) return 1;   // ���n > 0 �� �^�� 1
        if(ans < 0) return -1;  // ���n < 0 �� �^�� -1
        return 0;               // ���n = 0 �� �^�� 0
    }
};
