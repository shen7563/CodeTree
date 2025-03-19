#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, prod = 1;
    cin >> n;
    for(int i = 1; i <= 10; i++) {
        prod *= i;
        if(prod >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}