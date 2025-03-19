#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, sum = 0, count = 0;
    double avg = 0;

    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(i % 5 == 0 || i % 7 == 0) {
            sum += i;
            count++;
        }
    }
    cout << fixed;
    cout.precision(1);
    avg = (double)sum / count;
    cout << sum << " " << avg;
    return 0;
}