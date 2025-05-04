#include <iostream>
#include <climits>
#include <cmath>

#define MAX_N 1000

using namespace std;

int n, t;
int arr[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > t) {
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 0;
        }
    }
    maxCount = max(maxCount, count);
    cout << maxCount << "\n";
    return 0;
}