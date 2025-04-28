#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, b;
    int digit[20];
    int count = 0;
    cin >> n >> b;
    while(true) {
        if(n < b) {
            digit[count++] = n;
            break;
        }
        digit[count++] = n % b;
        n /= b;
    }
    for(int i = count - 1; i >= 0; i--) {
        cout << digit[i];
    }
    return 0;
}