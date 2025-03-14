#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed;
    cout.precision(6);
    int a = 13;
    double b = 0.165;

    cout << a << " * " << b << " = " << a * b << endl;
    return 0;
}