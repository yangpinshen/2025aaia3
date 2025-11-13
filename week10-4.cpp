// week10-4.cpp
// SLJ-Array-016
#include <iostream>
using namespace std;

int main() {

    int a[10][10], b[10][10], c[10][10];
    int N;
    cin >> N;

    // 讀取第一個矩陣 a
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> a[i][j];
        }
    }

    // 讀取第二個矩陣 b
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> b[i][j];
        }
    }

    // 執行矩陣乘法 c = a * b
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            int now = 0;
            for (int k=0; k<N; k++) {
                // 矩陣乘法核心公式: C[i][j] = Sum(A[i][k] * B[k][j])
                now += a[i][k] * b[k][j];
            }
            // 輸出 c[i][j] 的結果
            printf("%3d ", now);
        }
        cout << "\n";
    }

    return 0;
}
