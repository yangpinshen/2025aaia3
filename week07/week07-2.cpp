#include <iostream>
#include <cmath> // �ޤJ cmath �w�A�H�K�ϥ� max() �M abs()
#include <algorithm> // �]�t max ��� (���M��sĶ���A���Ǧb cmath �� algorithm)

using namespace std;

/**
 * �D�{���G��X�@�Ӥ��߹�٪��Ʀr���c�]�٧ΩΥ���Ρ^�C
 * ���c�����Ʀr d+1 �N��Ӧ�m�Z�������I���ҫ��y�Z���Τ��񳷤ҶZ���C
 */
int main()
{
    int n;
    // Ū����J�� n�An �ΨӨM�w��X���c���j�p�]����� 2n-1 �� 2n�^
    cin >> n;

    // �~���j��G������ i (�q 1 �� 2n-1)
    for (int i = 1; i < n * 2; i++)
    {
        // �����j��G����C�� j (�q 1 �� 2n-1)
        for (int j = 1; j < n * 2; j++)
        {
            // �p���e�y�� (i, j) �Z�������I (n, n) ���̤j����Z�� d�C
            // abs(i - n) �O��Z���Aabs(j - n) �O�C�Z���C
            // d �]�N�O���񳷤ҶZ�� (Chebyshev distance)�C
            int d = max(abs(i - n), abs(j - n));

            // ��X d + 1�C�Z������ (d=0) ���I��X 1�A�Z������ d=1 ���I��X 2�A�H�������C
            cout << d + 1;
        }

        // �C�浲���ᴫ��A�i�J�U�@��
        cout << endl;
    }

    return 0;
}
