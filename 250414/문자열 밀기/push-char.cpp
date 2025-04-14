#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    s = s.substr(1, s.length() - 1) + s[0];
    cout << s;
    return 0;
}