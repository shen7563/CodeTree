#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, m = 0;
    int count = 1;
    int arr[100][100] = {};
    cin >> n >> m;
    for(int i = 0; i < n + m - 1; i++) {
        for(int j = 0; j < n; j++) {
            if(i - j >= 0 && i - j < m) {
                arr[j][i - j] = count++;
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