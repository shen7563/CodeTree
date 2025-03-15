#include <iostream>
using namespace std;

int main()
{

    int a, b = 0;

    cin >> a >> b;

    if (a % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    if (b % 2 == 0)
    {
        cout << "\neven";
    }
    else
    {
        cout << "\nodd";
    }
    return 0;
}