#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i + j) % 4 == 0) {
                cout << "(" << i << ", " << j << ") " << "\n";
            }
            else {
                cout << "(" << i << ", " << j << ") ";
            }
        }
    }
    return 0;
}