// week02-3.cpp �ϥ� C++ 2011 �������r�Ŧ� + stoi() �\��
#include <iostream>  // cin cout
#include <string>    // string �r�ꪺ�\��
using namespace std;  // �ϥΩR�W�Ŷ��зǪ� std

int main()
{
    string a;  // �ŧi�r�� a
    cin >> a;  // ��J�r�� a

    string ans;  // �ŧi�r�� ans ��m����
    int N = a.length();  // ���o a �r�ꪺ����

    for (int i = N - 1; i >= 0; i--)  // �q�r������˧ǨӦ^
    {
        ans += a[i];  // �b�^��̡A �� a[i] ��Ȩ� ans ���᭱
    }

    cout << a << " + " << stoi(ans) << " = ";  // �L�X�r�� a stoi(ans) =
    cout << stoi(a) + stoi(ans) << endl;  // stoi(a) + stoi(ans) �ഫ�����
}
//stoi() is "string to int" ��r���ഫ�����
