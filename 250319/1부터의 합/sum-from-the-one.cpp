#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, sum = 0;
    cin >> n;
    for(int i = 1; i <= 100; i++) {
        sum += i;
        if(sum >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}