#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int n = 0;
        cin >> n;
        if(n == 0) break;
        cout << n << "\n";
    }
    return 0;
}