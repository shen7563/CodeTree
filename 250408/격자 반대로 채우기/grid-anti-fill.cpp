#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int arr[10][10] = {};
    int count = 1;
    int temp = 0;

    cin >> n;
    for(int i = n - 1; i >= 0; i--) {
        if(temp % 2 == 0) {
            for(int j = n - 1; j >= 0; j--) {
                arr[j][i] = count;
                count++;
            }
        }
        else {
            for(int j = 0; j < n; j++) {
                arr[j][i] = count;
                count++;
            }
        }
        temp++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}