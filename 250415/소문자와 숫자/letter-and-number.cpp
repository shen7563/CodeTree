#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i]) || isalpha(s[i])) {
            if(isupper(s[i])) {
                cout << (char)tolower(s[i]);
            }
            else {
                cout << s[i];
            }
        }
    }
    return 0;
}