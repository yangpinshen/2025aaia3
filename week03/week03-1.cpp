// week03-1.cpp   範例：C++ 的陣列 vector<int> a;
// 檔案 → 另存新檔，副檔名要是 .cpp，檔名要用英文
#include <iostream>   /// C++ 輸入輸出 cin cout
#include <vector>     /// C++ 的陣列 vector
using namespace std;

int main()
{
    vector<int> a(2);  /// 建立一個大小為 2 的陣列，初始值都是 0

    // 印出初始陣列
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;

    a.push_back(99);   /// 在陣列最後面加上一個 99
    a.push_back(77);   /// 在陣列最後面加上一個 77

    // 印出更新後的陣列
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}
