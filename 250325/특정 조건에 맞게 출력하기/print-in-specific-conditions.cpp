#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[100] = {0, };
    int temp = 0;
    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            temp = i;
            break;
        }
    }
    for(int i = 0; i < temp; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] / 2 << " ";
        } else {
            cout << arr[i] + 3 << " ";
        }
    }
    return 0;
}