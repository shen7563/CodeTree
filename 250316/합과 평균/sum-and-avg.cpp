#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 0;
    int b = 0;
    cin >> a >> b;
    int sum = a + b;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (double)sum/2;
}