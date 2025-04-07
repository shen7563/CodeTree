#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char arr[5][3];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            arr[i][j] = toupper(arr[i][j]);
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}