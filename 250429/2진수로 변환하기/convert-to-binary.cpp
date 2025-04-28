#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int digit[20];
    int count = 0;
    cin >> n;
    while(true) {
        if(n < 2) {
            digit[count++] = n;
            break;
        }
        digit[count++] = n % 2;
        n /= 2;
    }
    for(int i = count - 1; i >= 0; i--) {
        cout << digit[i];
    }
    return 0;
}