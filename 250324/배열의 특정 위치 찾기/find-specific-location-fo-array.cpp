#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0, };
    int sum_even = 0;
    int sum_mul_3 = 0;
    double avg = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(i % 2 == 1) {
            sum_even += arr[i];
        }
        if((i + 1) % 3 == 0) {
            sum_mul_3 += arr[i];
        }
    }
    avg = (double)sum_mul_3 / 3;
    cout << fixed;
    cout.precision(1);
    cout << sum_even << " " << avg;
    return 0;
}