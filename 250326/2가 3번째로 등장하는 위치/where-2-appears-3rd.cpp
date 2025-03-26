#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, count = 0;
    int arr[100] = {0, };
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 2) {
            count++;
        }
        if(count == 3) {
            cout << i + 1 << "\n";
            break;
        }
    }
    return 0;
}