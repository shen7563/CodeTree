#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c = 0;
    cin >> a >> b >> c;

    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(a == min) cout << 1 << " ";
    else cout << 0 << " ";
    if(a == b && b == c) cout << 1 << "\n";
    else cout << 0 << "\n";
    return 0;
}