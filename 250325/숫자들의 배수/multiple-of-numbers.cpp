#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, count = 0;
    cin >> n;

    int arr[100] = {0, };
    for(int i = 0; i < 100; i++) {
        arr[i] = n * (i + 1);
        cout << arr[i] << " ";
        if(arr[i] % 5 == 0) {
            count++;
        }
        if(count >= 2) {
            break;
        }
    }
    return 0;
}