#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0, };
    int count = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        count++;
    }
    for(int i = count - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}