#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 3;
    int b = 5;
    
    int temp = a;
    a = b;
    b = temp;

    cout << a << "\n" << b;
}