#include <iostream>
using namespace std;

int Max(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    return max(arr[n-1], Max(arr, n-1));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Max(arr, n);
    return 0;
}