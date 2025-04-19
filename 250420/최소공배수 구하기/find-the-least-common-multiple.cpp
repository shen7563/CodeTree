#include <iostream>
#include <algorithm>
using namespace std;


void LCM(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <=  min(n, m); i++) {
        if (n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }
    cout << n * m / gcd;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    LCM(n, m);
    
    return 0;
}