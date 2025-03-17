#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int m = 0;
        cin >> m;
        if(m % 2 == 1 && m % 3 == 0) {
            cout << m << "\n";
        }
    }
    return 0;
}