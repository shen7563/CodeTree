#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    int sum = 0;

    string s = to_string(a);

    for(int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}