#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() > str2.length()) {
        cout << str1 << " " << str1.length();
    }
    else if(str1.length() < str2.length()) {
        cout << str2 << " " << str2.length();
    }
    else {
        cout << "same";
    }
    return 0;
}