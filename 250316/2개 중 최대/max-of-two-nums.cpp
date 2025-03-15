#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;
    
    int max = a >= b ? a : b;

    cout << max;
}