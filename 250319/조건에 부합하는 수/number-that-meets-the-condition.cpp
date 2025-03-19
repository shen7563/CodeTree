#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0 && i % 4 != 0)
        {
            continue;
        }
        if ((i / 8) % 2 == 0)
        {
            continue;
        }
        if (i % 7 < 4)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}