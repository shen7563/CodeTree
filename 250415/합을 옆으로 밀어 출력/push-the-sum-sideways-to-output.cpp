#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int num = 0;
    string s;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        num += a;
    }
    s = to_string(num);

    s = s.substr(1, s.length() - 1) + s[0];
    cout << s;
    return 0;
}