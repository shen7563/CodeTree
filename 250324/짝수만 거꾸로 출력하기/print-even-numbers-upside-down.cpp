#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    int arr[100] = {0,};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}