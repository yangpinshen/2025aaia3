//week04-3.cpp
//leecode �ǲ߭p�e�ĤC�D 66. plus one


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // �����[ 1�A���|�i��
                return digits; // ����
            }
            digits[i] = 0; // �ݭn�i��A�Ӧ��k�s
        }
        // �Y�������O 9�A�Ҧp [9,9,9] �� [0,0,0]�A�̫�n�� 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
