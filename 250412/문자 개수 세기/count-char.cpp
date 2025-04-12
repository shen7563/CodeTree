#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    char c;
    int count = 0;
    getline(cin, str);
    cin >> c;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c) {
            count++;
        }
    }
    cout << count;
    return 0;
}