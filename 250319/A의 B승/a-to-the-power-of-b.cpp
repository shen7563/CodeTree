#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, prod = 1;
    cin >> a >> b;

    for (int i = 0; i < b; i++)
    {
        prod *= a;
    }
    cout << prod;
    return 0;
}