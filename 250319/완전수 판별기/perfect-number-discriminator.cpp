#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int sum = 0;

    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n) {
        cout << "P";
    }
    else {
        cout << "N";
    }
    return 0;
}