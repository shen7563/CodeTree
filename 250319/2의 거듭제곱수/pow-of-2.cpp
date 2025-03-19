#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, cnt = 1;
    cin >> n;
    while(true) {
        n /= 2;
        if(n == 1) {
            cout << cnt;
            break;
        }
        cnt++;
    }
    return 0;
}