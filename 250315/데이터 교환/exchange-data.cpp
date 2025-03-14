#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 5;
    int b = 6;
    int c = 7;
    
    int temp = a;
    a = c;
    c = b;
    b = temp;

    cout << a << "\n" << b << "\n" << c;
    return 0;
}