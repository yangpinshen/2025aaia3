#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    cout << endl << "�}�Ca�����׬O" << a.size() << endl;

    vector<int> b(3);
    cout << endl << "�}�Cb�����׬O" << b.size() << endl;

    vector<int> c(3, 88);
    cout << endl << "�}�Cc�����׬O" << c.size() << endl;

    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; // Fixed the extra comma
    vector<int> g(d, d + 10); // Fixed semicolon

    cout << endl << "�}�Cg�����׬O" << g.size() << endl;

    for (int i = 0; i < g.size(); i++) cout << g[i] << " "; // Loop for vector g

    return 0;
}

