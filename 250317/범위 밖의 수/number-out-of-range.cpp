#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0;
    cin >> a;

    if(a < 10 || a > 20) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}