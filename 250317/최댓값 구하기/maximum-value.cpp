#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b >> c;

    int max = a;

    if(max <= b) {
        max = b;
    }
    if(max <= c) {
        max = c;
    }

    cout << max;
    return 0;
}