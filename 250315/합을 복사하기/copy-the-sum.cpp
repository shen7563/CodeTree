#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 1;
    int b = 2;
    int c = 3;

    int total = a + b + c;
    a = b = c = total;

    cout << a << " " << b << " " << c;
}