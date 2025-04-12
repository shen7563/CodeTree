#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n = 0;
    string str[20];
    string s;
    int total_length = 0;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    cin >> s;
    for(int i = 0; i < n; i++) {
        if(str[i][0] == s[0]) {
            total_length += str[i].length();
            count++;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << count << " " << (double)total_length / count;
    return 0;
}