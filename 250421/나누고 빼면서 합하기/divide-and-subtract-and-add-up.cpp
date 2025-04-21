#include <iostream>
#include <string>
using namespace std;

int n, m;
int arr[100];

int Cal() {
    int sum = 0;
    while(true) {
        sum += arr[m - 1];
        if(m == 1) {
            return sum;
        }
        if(m % 2 == 0) {
            m /= 2;
        }
        else {
            m -= 1;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Cal();
    return 0;
}