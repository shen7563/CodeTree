#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int m = 0, count = 0;
        cin >> m;
        while(m != 1) {
            if(m % 2 == 0) {
                m /= 2;
            } else {
                m = 3 * m + 1;
            }
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}