#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed;
    cout.precision(3);
    
    double a = 5.26;
    double b = 8.27;

    cout << a * b;
}