#include <iostream>
#include <climits>
#include <cmath>

#define MAX_N 1000

using namespace std;

int n;
int arr[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 1;
    int maxCount = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(arr[i] * arr[i - 1] > 0) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);
    cout << maxCount << "\n";
    return 0;
}