// week03-1.cpp   �d�ҡGC++ ���}�C vector<int> a;
// �ɮ� �� �t�s�s�ɡA���ɦW�n�O .cpp�A�ɦW�n�έ^��
#include <iostream>   /// C++ ��J��X cin cout
#include <vector>     /// C++ ���}�C vector
using namespace std;

int main()
{
    vector<int> a(2);  /// �إߤ@�Ӥj�p�� 2 ���}�C�A��l�ȳ��O 0

    // �L�X��l�}�C
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;

    a.push_back(99);   /// �b�}�C�̫᭱�[�W�@�� 99
    a.push_back(77);   /// �b�}�C�̫᭱�[�W�@�� 77

    // �L�X��s�᪺�}�C
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}
