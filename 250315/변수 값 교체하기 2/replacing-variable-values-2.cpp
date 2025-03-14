#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 5;
    int b = 3;
    a = b;
    cout << a << "\n" << b;
    return 0;
}