#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c = 0;
    cin >> a >> b >> c;

    if(b > a && b < c) {
        cout << 1;
    }
    else cout << 0;
    return 0;
}