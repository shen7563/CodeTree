#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;

    if(a > 0) {
        for(int i = 1; i <= b; i++) {
            cout << a;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}