#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;

    while(a <= b) {
        cout << a << " ";
        a += 2;
    }
    return 0;
}