#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = n; j > i / 2; j--)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < i / 2; j++)
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            for (int j = n; j > i / 2; j--)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < i / 2; j++)
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}