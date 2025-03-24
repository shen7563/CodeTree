#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, count = 0;
    cin >> n;
    int arr[100] = {0 ,};
    int arr2[100] = {0, };
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            arr2[count] = arr[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}