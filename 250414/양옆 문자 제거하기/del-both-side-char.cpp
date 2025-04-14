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
    s.erase(1, 1);
    s.erase(s.length()-2, 1);
    cout << s;
    return 0;
}