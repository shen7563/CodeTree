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
    cout << s << "\n";
    for(int i = 0; i < s.length(); i++) {
        s = s[s.length() - 1] + s.substr(0, s.length() - 1);
        cout << s << "\n";
    }
    return 0;
}