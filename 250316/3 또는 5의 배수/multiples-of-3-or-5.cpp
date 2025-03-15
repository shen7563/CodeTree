#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    cin >> a;

    if (a % 3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    if (a % 5 == 0)
    {
        cout << "\nYES";
    }
    else
    {
        cout << "\nNO";
    }
    return 0;
}