#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        cout << s[i] << "\n";
    }
    return 0;
}