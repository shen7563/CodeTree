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
    s.erase(s.find('e'), 1); // Remove the first occurrence of 'e'
    cout << s;
    return 0;
}