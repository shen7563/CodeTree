#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char a;
    cin >> a;
    if(a == 'a') {
        cout << 'z';
    }
    else {
        cout << (char)(a - 1);
    }
    return 0;
}