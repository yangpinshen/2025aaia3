// week11-2b.cpp
// SOIT107_ADVANCE_009_C_C++
#include <iostream>
using namespace std;

// ㄧΑт俱计 n い程计絏 (digit)
int max_digit(int n) {
    int ans = n % 10; // ﹍て ans 计
    while (n > 0) { // 讽 n 临Τ计絏膥尿
        // (n % 10) ans = n % 10;
        if (n % 10 > ans) { // 狦讽玡计ゑ ans 
            ans = n % 10; // 穝 ans
        }
        n = n / 10; // 簿埃计
    }
    return ans; // 肚т程计絏
}

int main() {
    int n;
    cin >> n; // 块俱计 n
    cout << "[" << max_digit(n) << "]" << endl; // 块 max_digit(n) 挡狦
    return 0;
}
/*
* よ C++  main ㄧ计单基よ C main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]\n", max_digit(n));
}
*/
