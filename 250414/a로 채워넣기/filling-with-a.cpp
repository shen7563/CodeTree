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
    s[1] = 'a';
    s[s.length() - 2] = 'a';
    cout << s;
    return 0;
}