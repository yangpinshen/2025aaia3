/// week05-3c.cpp  Part1: Input, Part2: Output
/// CPE ��2�D UVA 483 �˹L��

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string line;  /// �@�檺�r��  Part 1: Input
    while (getline(cin, line)) {  /// Ū�i�C�@��
        stringstream ss(line);
        string word;
        bool first = true; // ����ťտ�X

        while (ss >> word) {
            reverse(word.begin(), word.end()); // �ץ����r���~�]�쥻�g�� wird�^
            if (!first) cout << " "; // ��r���[�ť�
            cout << word;
            first = false;
        }
        cout << endl; // �C�浲������
    }
}
