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
    int start_idx = 0;
    bool flag = false;
    
    for(int i = 0; i < s.length() - t.length() + 1; i++)
    {
        if(s.substr(i, t.length()) == t)
        {
            start_idx = i;
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << start_idx;
    }
    else {
        cout << -1;
    }
    return 0;
}