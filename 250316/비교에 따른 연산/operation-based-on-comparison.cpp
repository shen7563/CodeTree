#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;
    if(a > b) {
        cout << a * b;
    }
    else {
        cout << b / a;
    }
}