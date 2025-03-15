#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string c;
    double a;
    double b;

    cin >> c >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << c << "\n" << a << "\n" << b;
}