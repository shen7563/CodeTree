#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != ' ') {
            cout << str1[i];
        }
    }
    for(int i = 0; i < str2.length(); i++) {
        if(str2[i] != ' ') {
            cout << str2[i];
        }
    }
    return 0;
}