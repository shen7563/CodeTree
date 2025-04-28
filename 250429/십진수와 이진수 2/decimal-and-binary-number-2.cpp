#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string binary;
    cin >> binary;
    
    int num = 0;
    for(int i = 0; i < binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }
    num *= 17;
    int digit[20];
    int count = 0;
    while(true) {
        if(num < 2) {
            digit[count++] = num;
            break;
        }
        digit[count++] = num % 2;
        num /= 2;
    }
    for(int i = count - 1; i >= 0; i--) {
        cout << digit[i];
    }
    return 0;
}