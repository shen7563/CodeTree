#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0,};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    sum += arr[2] + arr[4] + arr[9];
    cout << sum;
    return 0;
}