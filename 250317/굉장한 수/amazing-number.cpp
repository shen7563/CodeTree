#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;

    cout << ((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0) ? "true" : "false");
    return 0;
}