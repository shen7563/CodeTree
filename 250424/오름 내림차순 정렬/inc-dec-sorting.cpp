#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}