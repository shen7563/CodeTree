#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b = 0;
    cin >> a >> b;

    cout << (a >= b ? 1 : 0) << "\n";
    cout << (a > b ? 1 : 0) << "\n";
    cout << (a <= b ? 1 : 0) << "\n";
    cout << (a < b ? 1 : 0) << "\n";
}