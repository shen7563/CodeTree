#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s >> t;
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        s = s.substr(s.length() - 1, 1) + s.substr(0, s.length() - 1);
        count++;
        if (s == t) {
            cout << count;
            return 0;
        }
        if(i == s.length() - 1) {
            cout << -1;
            return 0;
        }
    }
    return 0;
}