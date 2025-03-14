#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 3;
    int b = 4;
    b = a;
    cout << a << " " << b << "\n" << a * b;
    return 0;
}