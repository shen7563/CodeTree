#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;

    cin >> a >> b;
    while(b >= a) {

        cout << a << " ";
        if(a % 2 == 1) {
            a *= 2;
        }
        else {
            a += 3;
        }
    }
    return 0;
}