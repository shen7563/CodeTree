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
        if(n >= 1000) {
            cout << cnt;
            break;
        }
        if(n % 2 == 0) {
            n = n * 3 + 1;
            cnt++;
        }
        else {
            n = n * 2 + 2;
            cnt++;
        }
    }
    return 0;
}