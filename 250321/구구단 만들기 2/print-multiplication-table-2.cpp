#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0;
    cin >> a >> b;

    for (int i = 2; i <= 8; i += 2)
    {
        for (int j = b; j >= a; j--)
        {
            cout << j << " * " << i << " = " << j * i;
            if (j != a)
            {
                cout << " / ";
            }
        }
        cout << "\n";
    }
    return 0;
}