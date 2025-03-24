#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int countArr[11] = {0, };
    int arr[100] = {0, };
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        countArr[arr[i]]++;
    }
    for(int i = 1; i < 10; i++) {
        cout << countArr[i] << "\n";
    }
    return 0;
}