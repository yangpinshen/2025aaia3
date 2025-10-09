/// week05-3c.cpp  Part1: Input, Part2: Output
/// CPE 第2題 UVA 483 倒過來

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string line;  /// 一行的字串  Part 1: Input
    while (getline(cin, line)) {  /// 讀進每一行
        stringstream ss(line);
        string word;
        bool first = true; // 控制空白輸出

        while (ss >> word) {
            reverse(word.begin(), word.end()); // 修正拼字錯誤（原本寫成 wird）
            if (!first) cout << " "; // 單字間加空白
            cout << word;
            first = false;
        }
        cout << endl; // 每行結束換行
    }
}
