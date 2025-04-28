#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    cout << (m2 * 60 + d2) - (m1 * 60 + d1);
}