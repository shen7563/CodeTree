#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, sum = 0;
    double avg = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int m = 0;
        cin >> m;
        sum += m;
    }
    avg = (double)sum / n;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}