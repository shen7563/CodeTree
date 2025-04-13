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
    int count = 0;
    
    for(int i = 0; i < s.length() - t.length() + 1; i++) {
        if(s.substr(i, t.length()) == t) {
            count++;
        }
    }
    cout << count;
    return 0;
}