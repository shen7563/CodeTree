#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, count = 0;
    cin >> n;
    int div = n;
    for (int i = 1; i <= n; i++)
    {
        div /= i;
        count++;
        if(div <= 1) {
            cout << count;
            break;
        }
    }
    return 0;
}