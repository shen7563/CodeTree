#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int arr[10] = {0};
    int min_minus = INT_MAX;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++) {
        int minus = arr[i + 1] - arr[i];
        if(minus < min_minus) {
            min_minus = minus;
        }
    }
    cout << min_minus;
    return 0;
}