#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 0;
    int b = 0;

    cin >> a >> b;

    int sum = a + b;
    int minus = a - b;

    double total = (double) sum / minus;

    cout << fixed;
    cout.precision(2);

    cout << total;
}