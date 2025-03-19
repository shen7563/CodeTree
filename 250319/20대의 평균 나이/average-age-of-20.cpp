#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum = 0, count = 0;
    double avg = 0;
    while (true)
    {
        int n = 0;
        cin >> n;
        if(n >= 30 || n < 20) {
            break;
        }
        else {
            sum += n;
            count++;
        }
    }
    cout << fixed;
    cout.precision(2);
    avg = (double)sum / count;
    cout << avg;
    return 0;
}