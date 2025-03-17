#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int i = 3;

    cin >> n;

    while(i <= n) {
        cout << i << " ";
        i += 3;
    }
    return 0;
}