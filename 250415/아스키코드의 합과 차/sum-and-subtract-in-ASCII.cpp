#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s, t;
    cin >> s >> t;
    int sum = (int)s + (int)t;
    int minus;
    if(s > t) {
        minus = (int)s - (int)t;
    }
    else {
        minus = (int)t - (int)s;
    }
    cout << sum << " " << minus;
    return 0;
}