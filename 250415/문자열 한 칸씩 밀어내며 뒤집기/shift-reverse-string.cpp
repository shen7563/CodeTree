#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n;
    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            s = s.substr(1, s.length() - 1) + s[0];
            cout << s << "\n";
        }
        else if(q == 2) {
            s = s[s.length() - 1] + s.substr(0, s.length() - 1);
            cout << s << "\n";
        }
        else if(q == 3) {
            reverse(s.begin(), s.end());
            cout << s << "\n";
        }
    }
    return 0;
}