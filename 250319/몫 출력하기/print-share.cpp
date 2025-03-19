#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count = 0;
    while (true)
    {
        int n = 0;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
            count++;
        }
        if (count == 3)
        {
            break;
        }
    }
    return 0;
}