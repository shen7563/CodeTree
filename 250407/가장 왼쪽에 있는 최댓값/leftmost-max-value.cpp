#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int arr[1000] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int end = n;
    while(end > 0) {
        int maxIndex = 0;
        for(int i = 1; i < end; i++) {
            if(arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        cout << maxIndex + 1 << + " ";
        end = maxIndex;
    }
    return 0;
}