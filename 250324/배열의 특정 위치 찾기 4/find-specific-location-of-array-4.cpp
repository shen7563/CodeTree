#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum = 0, count = 0;
    int arr[10] = {0,};
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        if(arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    cout << count << " " << sum;
    return 0;
}