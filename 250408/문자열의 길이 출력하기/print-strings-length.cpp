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
    cout << str1.length() + str2.length();
    return 0;
}