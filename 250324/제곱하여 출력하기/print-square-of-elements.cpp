#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int arr[100] = {0, };
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] *= arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}