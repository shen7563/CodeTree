#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, e = 0;
    cin >> a >> b >> c >> d >> e;

    cout << (a > b ? 1 : 0) << "\n";
    cout << (a > c ? 1 : 0) << "\n";
    cout << (a > d ? 1 : 0) << "\n";
    cout << (a > e ? 1 : 0) << "\n";
}