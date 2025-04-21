#include <iostream>
using namespace std;

void IsEven(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int arr[50];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    IsEven(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}