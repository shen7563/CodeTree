#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string binary;
    cin >> binary;
    int num = 0;
    for(int i = 0; i < (int)binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }
    cout << num;
    return 0;
}