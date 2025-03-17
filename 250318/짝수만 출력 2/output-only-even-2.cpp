#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;
    int i = a;
    int j = b;

    while (i >= j)
    {
        cout << i << " ";
        i -= 2;
    }
    return 0;
}