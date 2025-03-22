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
        int a = 0, b = 0, sum = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            if(j % 2 == 0) {
                sum += j;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}