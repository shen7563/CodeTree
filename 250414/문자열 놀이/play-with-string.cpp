#include <iostream>
#include <string>
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
            int a, b;
            cin >> a >> b;
            char temp = s[b - 1];
            s[b - 1] = s[a - 1];
            s[a - 1] = temp;
            cout << s << "\n";
        }
        else if(q == 2) {
            char x, y;
            cin >> x >> y;
            for(int j = 0; j < s.length(); j++) {
                if(s[j] == x) {
                    s[j] = y;
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}