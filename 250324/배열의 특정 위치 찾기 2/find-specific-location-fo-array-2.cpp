#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum_even = 0;
    int sum_odd = 0;
    int arr[10] = {0, };
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(i % 2 == 0) {
            sum_odd += arr[i];
        }
        else {
            sum_even += arr[i];
        }
    }
    if(sum_odd >= sum_even) {
        cout << sum_odd - sum_even;
    }
    else {
        cout << sum_even - sum_odd;
    }
    return 0;
}