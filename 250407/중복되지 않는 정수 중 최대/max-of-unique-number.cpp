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
    int max = INT_MIN;
    bool isUnique = true;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique && arr[i] > max) {
            max = arr[i];
        }
    }
    if(max == INT_MIN) {
        cout << -1;
    } else {
        cout << max;
    }
    return 0;
}