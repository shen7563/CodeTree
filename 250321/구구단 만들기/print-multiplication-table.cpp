#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0;
    cin >> a >> b;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = b; j >= a; j -= 2)
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