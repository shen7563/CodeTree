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
        for(int j = i; j <= n; j++) {
            for(int k = i; k <= n; k++) {
                cout << "*";
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}