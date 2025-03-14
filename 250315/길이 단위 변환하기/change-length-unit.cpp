#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed;
    cout.precision(1);
    
    double ft_to_cm = 30.48;
    double mi_to_cm = 160934;

    double ft = 9.2;
    double mi = 1.3;

    cout << ft << "ft = " << ft * ft_to_cm << "cm\n";
    cout << mi << "mi = " << mi * mi_to_cm << "cm\n";
}