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
    while(s.length() > 1) {
        int n;
        cin >> n;
        if(n >= s.length()) {
            s.erase(s.end() - 1);
            cout << s << "\n";
        }
        else {
            s.erase(n, 1);
            cout << s << "\n";
        }
        
    }
    return 0;
}