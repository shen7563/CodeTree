#include <iostream>
using namespace std;

int main() {
    double ft_to_cm = 30.48;
    double ft = 0;

    cin >> ft;

    cout << fixed;
    cout.precision(1);

    cout << ft * ft_to_cm;
    return 0;
}