#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    for(int i = n; i > 0; i--) {
        for(int j = n; j > 0; j--) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << "\n";
    }
    return 0;
}