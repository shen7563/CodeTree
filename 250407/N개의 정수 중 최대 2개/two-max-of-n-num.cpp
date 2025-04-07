#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[100] = {0};
    int max_first = INT_MIN;
    int max_second = INT_MIN;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max_first) {
            max_second = max_first;
            max_first = arr[i];
        } else if(arr[i] > max_second) {
            max_second = arr[i];
        }
    }
    cout << max_first << " " << max_second;
    return 0;
}