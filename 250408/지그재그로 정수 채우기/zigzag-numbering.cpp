#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, m = 0;
    int count = 0;
    int arr[100][100] = {};
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        if(i % 2 == 1) {
            for(int j = n - 1; j >= 0; j--) {
                arr[j][i] = count++;
            }
        }
        else {
            for(int j = 0; j < n; j++) {
                arr[j][i] = count++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}