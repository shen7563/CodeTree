#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0;
    cin >> a;

    if (a % 3 == 0 || a % 5 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}