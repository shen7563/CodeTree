#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s;
    return 0;
}