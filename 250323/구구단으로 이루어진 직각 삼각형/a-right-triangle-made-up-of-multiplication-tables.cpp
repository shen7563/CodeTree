#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << i << " * " << j << " = " << i * j;
            if(j != n - i + 1) {
                cout << " / ";
            }
        }
        cout << "\n";
    }
    return 0;
}