#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, prod = 1;
    cin >> a >> b;

    for(int i = 1; i <= b; i++) {
        if(i % a == 0) {
            prod *= i;
        }
    }
    cout << prod;
    return 0;
}