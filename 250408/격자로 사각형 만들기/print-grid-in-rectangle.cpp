#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    int arr[10][10] = {};
    for(int i = 0; i < n; i++) {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}