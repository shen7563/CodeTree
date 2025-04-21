#include <iostream>
using namespace std;

void F(int &a, int &b) {
    if(a >= b) {
        a += 25;
        b *= 2;
    }
    else {
        a *= 2;
        b += 25;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    F(a, b);
    cout << a << " " << b;
    return 0;
}