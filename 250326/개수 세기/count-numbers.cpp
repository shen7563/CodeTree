#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;
    int arr[100];
    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == m) {
            count++;
        }
    }
    cout << count;
    return 0;
}