#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (c > a)
        {
            cout << a;
        }
        else if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (c > b)
        {
            cout << b;
        }
        else if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    return 0;
}