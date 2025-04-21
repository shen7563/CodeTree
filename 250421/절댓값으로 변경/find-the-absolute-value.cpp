#include <iostream>
using namespace std;

void Absolute(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            arr[i] = -arr[i];
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
    Absolute(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}