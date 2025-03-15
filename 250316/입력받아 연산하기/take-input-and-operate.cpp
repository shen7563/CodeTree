#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 0;
    int b = 0;

    cin >> a >> b;

    a += 87;
    b %= 10;

    cout << a << "\n" << b;
}