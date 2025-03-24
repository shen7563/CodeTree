#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum = 0, count = 0;
    double avg = 0;
    int arr[10] = {0,};
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        sum += arr[i];
        count++;
    }
    avg = (double)sum / count;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}