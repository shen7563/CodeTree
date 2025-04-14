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
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}