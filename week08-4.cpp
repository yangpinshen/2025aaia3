// week08-4.cpp
// �ƽ׶¬}�d�C�_�`�� 6174 (�j��p - �p��j, ����?��)
#include <iostream>
#include <vector> // �x�s�ۥѪ��}�C
#include <algorithm> // �t��k sort() �O���k�a!
using namespace std;

int main() {
    cout << "�п�J���N4���(�����P): "; // ex. 1234 1 2 3 4
    int N;
    cin >> N;

    for (int i = 0; i < 7; i++) { // �C�B���A���w����¬} 6174
        vector<int> a;
        while (N > 0) { // ��֪k�A��4��ơA�v�@��X��
            a.push_back(N % 10); // �⥦���}�C�̭�
            N = N / 10; // �쩳�C�ܼ�N
        }

        sort(a.begin(), a.end()); // ��}�C�u�p��j�Ʀn�v

        // ���s�զX���Ʀr (m�O�p��j, M�O�j��p)
        // �`�N�G�o�̪����ѻP��ڵ{���X�޿�i�঳�ǲV�éΤ�����

        // M: �j��p (���� sort ���� a[3] a[2] a[1] a[0])
        int M = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]; // �˹L�ӡA�j��p

        // m: �p��j (���� sort ���� a[0] a[1] a[2] a[3])
        int m = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3]; // �p��j

        // �g�@�U�AM�O����? m�O����? �٨S�oı

        N = M - m;

        cout << M << "�" << m << "�o��: " << N << endl;
    }

    return 0;
}
