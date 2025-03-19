#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, cnt = 0;
    cin >> n;
    while(true) {
        if(n == 1) {
            cout << cnt << '\n';
            break;
        }
        if(n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        else {
            n = 3 * n + 1;
            cnt++;
        }
    }
    return 0;
}