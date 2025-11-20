// week11-2a.cpp
// SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;

// ㄧΑ耞 n 琌借计 (1=琌, 0=)
int prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // т计ぃ琌借计
        }
    }
    return 1; // ⊿Τт计琌借计
}

int main() {
    int n;
    cin >> n; // 块俱计 n
    cout << "[" << prime(n) << "]" << endl; // 块 prime(n) 挡狦
    return 0;
}
/*
* よ C++  main ㄧ计单基よ C main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]\n", prime(n));
}
*/
