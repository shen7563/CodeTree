#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j % 2 == 1) {
                cout << i;
            }
            else {
                cout << n - i + 1;
            }
        }
        cout << "\n";
    }
    return 0;
}