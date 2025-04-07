#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int min = INT_MAX;
    int count = 0;
    int arr[100] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) {
            count++;
        }
    }
    cout << min << " " << count;
    return 0;
}