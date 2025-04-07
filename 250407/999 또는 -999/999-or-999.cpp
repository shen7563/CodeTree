#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[100] = {0};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999) {
            break;
        }
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}