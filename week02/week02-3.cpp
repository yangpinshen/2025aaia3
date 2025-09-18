// week02-3.cpp 使用 C++ 2011 版本的字符串 + stoi() 功能
#include <iostream>  // cin cout
#include <string>    // string 字串的功能
using namespace std;  // 使用命名空間標準的 std

int main()
{
    string a;  // 宣告字串 a
    cin >> a;  // 輸入字串 a

    string ans;  // 宣告字串 ans 放置答案
    int N = a.length();  // 取得 a 字串的長度

    for (int i = N - 1; i >= 0; i--)  // 從字串尾部倒序來回
    {
        ans += a[i];  // 在回圈裡， 把 a[i] 賦值到 ans 的後面
    }

    cout << a << " + " << stoi(ans) << " = ";  // 印出字串 a stoi(ans) =
    cout << stoi(a) + stoi(ans) << endl;  // stoi(a) + stoi(ans) 轉換成整數
}
//stoi() is "string to int" 把字串轉換成整數
