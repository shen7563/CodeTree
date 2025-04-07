#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[2][4];
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);
    for(int i = 0; i < 2; i++) {
        sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << (double)sum / 4 << " ";
    }
    cout << "\n";
    
    for(int i = 0; i < 4; i++) {
        sum = 0;
        for(int j = 0; j < 2; j++) {
            sum += arr[j][i];
        }
        cout << (double)sum / 2 << " ";
    }
    cout << "\n";

    sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    cout << (double)sum / 8 << "\n";
    return 0;
}