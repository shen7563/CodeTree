#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, sum = 0;
    cin >> n;
    for(int i = 0; i< n; i++) {
        int m = 0;
        cin >> m;
        if(m % 2 != 0 && m % 3 == 0) {
            sum += m;
        }
    }
    cout << sum;
    return 0;
}