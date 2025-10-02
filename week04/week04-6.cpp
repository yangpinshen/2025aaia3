#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    cout << endl << "陣列a的長度是" << a.size() << endl;

    vector<int> b(3);
    cout << endl << "陣列b的長度是" << b.size() << endl;

    vector<int> c(3, 88);
    cout << endl << "陣列c的長度是" << c.size() << endl;

    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; // Fixed the extra comma
    vector<int> g(d, d + 10); // Fixed semicolon

    cout << endl << "陣列g的長度是" << g.size() << endl;

    for (int i = 0; i < g.size(); i++) cout << g[i] << " "; // Loop for vector g

    return 0;
}

