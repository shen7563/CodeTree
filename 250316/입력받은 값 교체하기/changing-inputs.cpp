#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " <<  b;
}