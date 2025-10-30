// week08-4.cpp
// 數論黑洞卡列奇常數 6174 (大到小 - 小到大, 重覆?次)
#include <iostream>
#include <vector> // 儲存自由的陣列
#include <algorithm> // 演算法 sort() 是選算法吧!
using namespace std;

int main() {
    cout << "請輸入任意4位數(都不同): "; // ex. 1234 1 2 3 4
    int N;
    cin >> N;

    for (int i = 0; i < 7; i++) { // 七步內，必定掉到黑洞 6174
        vector<int> a;
        while (N > 0) { // 剝皮法，把4位數，逐一剝出來
            a.push_back(N % 10); // 把它塞到陣列裡面
            N = N / 10; // 到底。變數N
        }

        sort(a.begin(), a.end()); // 把陣列「小到大排好」

        // 重新組合成數字 (m是小到大, M是大到小)
        // 注意：這裡的註解與實際程式碼邏輯可能有些混亂或不完整

        // M: 大到小 (對應 sort 之後 a[3] a[2] a[1] a[0])
        int M = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]; // 倒過來，大到小

        // m: 小到大 (對應 sort 之後 a[0] a[1] a[2] a[3])
        int m = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3]; // 小到大

        // 寫一下，M是什麼? m是什麼? 還沒發覺

        N = M - m;

        cout << M << "減掉" << m << "得到: " << N << endl;
    }

    return 0;
}
