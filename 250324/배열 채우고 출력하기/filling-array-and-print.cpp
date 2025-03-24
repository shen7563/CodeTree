#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c[10] = {};
    for(int i = 0; i < 10; i++) {
        cin >> c[i];
    }
    for(int i = 9; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}