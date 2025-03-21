#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        for(int j = i; j <= n; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}