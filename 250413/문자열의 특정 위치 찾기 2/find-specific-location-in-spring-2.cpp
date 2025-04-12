#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    string s;
    int count = 0;
    cin >> s;
    for(int i = 0; i < 5; i++) {
        if(str[i][2] == s[0] || str[i][3] == s[0]) {
            cout << str[i] << "\n";
            count++;
        }
    }
    cout << count;
    return 0;
}