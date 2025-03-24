#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0, };
    int temp = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] % 3 == 0) {
            temp = i;
            break;
        }
    }
    cout << arr[temp - 1];
    return 0;
}