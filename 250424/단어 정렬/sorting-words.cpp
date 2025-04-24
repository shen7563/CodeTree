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

    int n;
    string s[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n);
    for(int i = 0; i < n; i++) {
        cout << s[i] << "\n";
    }
    return 0;
}