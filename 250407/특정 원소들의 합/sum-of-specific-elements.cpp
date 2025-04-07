#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[4][4];
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <= i; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}