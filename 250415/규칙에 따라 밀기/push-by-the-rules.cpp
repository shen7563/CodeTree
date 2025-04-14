#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    string order;
    cin >> s >> order;
    for(int i = 0; i < order.length(); i++) {
        if(order[i] == 'L') {
            s = s.substr(1, s.length() - 1) + s[0];
        }
        else {
            s = s.substr(s.length() - 1, 1) + s.substr(0, s.length() - 1);
        }
    }
    cout << s;
    return 0;
}