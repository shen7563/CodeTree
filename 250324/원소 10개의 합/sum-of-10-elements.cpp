#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {0,};
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << '\n';
    return 0;
}