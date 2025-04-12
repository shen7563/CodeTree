#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str[10];
    string s;
    bool flag = false;
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    cin >> s;
    for(int i = 0; i < 10; i++) {
        if(str[i][str[i].length() - 1] == s[0]) {
            cout << str[i] << "\n";
            flag = true;
        }
    }
    if(!flag) {
        cout << "None";
    }
    return 0;
}