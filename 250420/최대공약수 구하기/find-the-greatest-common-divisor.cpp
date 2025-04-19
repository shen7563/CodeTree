#include <iostream>
using namespace std;


void GCD(int n, int m) {
    if(m == 0) {
        cout << n << "\n";
        return;
    }
    GCD(m, n % m);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    GCD(n, m);
    
    return 0;
}