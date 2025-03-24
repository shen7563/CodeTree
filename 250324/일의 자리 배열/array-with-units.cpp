#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0, };
    cin >> arr[0] >> arr[1];
    cout << arr[0] << " " << arr[1] << " ";
    for(int i = 2; i < 10; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i] >= 10) {
            arr[i] %= 10;
        }
        cout << arr[i] << " ";
    }
    return 0;
}