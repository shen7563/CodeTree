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
    char s1 = s[0];
    char s2 = s[1];
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s1) {
            s[i] = s2;
        } else if(s[i] == s2) {
            s[i] = s1;
        }
    }
    cout << s;
    return 0;
}