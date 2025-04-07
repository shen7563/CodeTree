#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0};
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int standard = 500;
    int min = INT_MAX;
    for(int i = 0; i < 10; i++) {
        if(arr[i] > max && arr[i] < standard) {
            max = arr[i];
        }
        if(arr[i] < min && arr[i] > standard) {
            min = arr[i];
        }
    }
    cout << max << " " << min;
    return 0;
}