#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum = 0, count = 0;
    double avg = 0;

    for(int i = 0; i < 10; i++) {
        int n = 0;
        cin >> n;
        if(n >= 0 && n <= 200) {
            sum += n;
            count++;
        }
    }
    avg = (double)sum / count;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}