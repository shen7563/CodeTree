#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, m = 0, count = 1;
    int arr[9][9] = {};
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int r = 0, c = 0;
        cin >> r >> c;
        arr[r - 1][c - 1] = count++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}