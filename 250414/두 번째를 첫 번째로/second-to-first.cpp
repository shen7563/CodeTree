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
    char a = s[0];
    char b = s[1];
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == b) {
            s[i] = a;
        }
    }
    cout << s;
    return 0;
}