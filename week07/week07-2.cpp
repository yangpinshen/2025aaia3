#include <iostream>
#include <cmath> // 引入 cmath 庫，以便使用 max() 和 abs()
#include <algorithm> // 包含 max 函數 (取決於編譯器，有些在 cmath 或 algorithm)

using namespace std;

/**
 * 主程式：輸出一個中心對稱的數字結構（菱形或正方形）。
 * 結構中的數字 d+1 代表該位置距離中心點的曼哈頓距離或切比雪夫距離。
 */
int main()
{
    int n;
    // 讀取輸入值 n，n 用來決定輸出結構的大小（邊長為 2n-1 或 2n）
    cin >> n;

    // 外部迴圈：控制行數 i (從 1 到 2n-1)
    for (int i = 1; i < n * 2; i++)
    {
        // 內部迴圈：控制列數 j (從 1 到 2n-1)
        for (int j = 1; j < n * 2; j++)
        {
            // 計算當前座標 (i, j) 距離中心點 (n, n) 的最大絕對距離 d。
            // abs(i - n) 是行距離，abs(j - n) 是列距離。
            // d 也就是切比雪夫距離 (Chebyshev distance)。
            int d = max(abs(i - n), abs(j - n));

            // 輸出 d + 1。距離中心 (d=0) 的點輸出 1，距離中心 d=1 的點輸出 2，以此類推。
            cout << d + 1;
        }

        // 每行結束後換行，進入下一行
        cout << endl;
    }

    return 0;
}
