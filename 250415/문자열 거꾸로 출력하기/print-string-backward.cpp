#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        string s;
        cin >> s;
        if(s == "END") {
            break;
        }
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }
    return 0;
}