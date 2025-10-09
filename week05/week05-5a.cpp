// week05-5a.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main()
{
    int now;
    cin >> now;

    int M = now, m = now;
    for (int i = 0; i < 5; i++) {
        cin >> now;
        if (now > M) M = now;
        if (now < m) m = now;
    }

    cout << M - m;
}
