#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 0;
    int b = 0;

    cin >> a >> b;

    a += b;
    b += a;

    cout << a << " " << b;
}