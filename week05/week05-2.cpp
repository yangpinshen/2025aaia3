///week05-2.cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    cout << "請輸入一段英文，裡面可以有空格：";
    string s;
    getline(cin, s);
    cout << "讀到了 s 字串: " << s << endl;

    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << "有一個字: " << word << endl;
    }

    return 0;
}

