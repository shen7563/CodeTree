#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            sum += s[i] - '0';
        }
    }
    cout << sum;
    return 0;
}