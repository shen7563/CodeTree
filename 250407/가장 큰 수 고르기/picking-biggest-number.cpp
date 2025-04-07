#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0};
    int max = INT_MIN;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}