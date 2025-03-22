#include <iostream>
using namespace std;

int main()
{
    int n = 0, alpha = 65;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(alpha > 90) {
                alpha = 65;
            }
            cout << (char)alpha;
            alpha++;
        }
        cout << "\n";
    }
    return 0;
}