#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    string n;
    cin >> a >> b >> n;
    int num = 0;
    for(int i = 0; i < n.size(); i++) {
        num = num * a + (n[i] - '0');
    }
    int digit[30];
    int count = 0;
    while(true) {
        if(num < b) {
            digit[count++] = num;
            break;
        }
        digit[count++] = num % b;
        num /= b;
    }
    for(int i = count - 1; i >= 0; i--) {
        cout << digit[i];
    }
    return 0;
}