#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    string t;
    cin >> s;
    cin >> t;
    
    if(s.find(t) != string::npos) {
        cout << s.find(t);
    }
    else {
        cout << "No";
    }
    return 0;
}