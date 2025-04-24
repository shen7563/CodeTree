#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;
    
    int arr[2000];

    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 2 * n);
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = arr[i] + arr[2 * n - 1 - i];
        if(sum > max) {
            max = sum;
        }
    }
    cout << max;
    return 0;
}