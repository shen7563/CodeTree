#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[100] = {0, };
    int sum = 0;
    int save = 0;
    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            save = i;
            break;
        }
    }
    for(int i = save - 1; i >= save - 3; i--) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}