#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s, t;
    cin >> s >> t;
    t[0] = s[0];
    t[1] = s[1];
    cout << t;
    return 0;
}