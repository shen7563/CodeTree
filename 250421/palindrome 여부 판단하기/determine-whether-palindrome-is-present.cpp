#include <iostream>
#include <string>
using namespace std;

void IsPalindrome(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    IsPalindrome(str);
    return 0;
}