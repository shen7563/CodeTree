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
    string remove;
    cin >> remove;
    while(s.find(remove) != string::npos) {
        int pos = s.find(remove);
        s.erase(pos, remove.length());
    }
    cout << s;
    return 0;
}