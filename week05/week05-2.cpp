///week05-2.cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    cout << "�п�J�@�q�^��A�̭��i�H���Ů�G";
    string s;
    getline(cin, s);
    cout << "Ū��F s �r��: " << s << endl;

    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << "���@�Ӧr: " << word << endl;
    }

    return 0;
}

