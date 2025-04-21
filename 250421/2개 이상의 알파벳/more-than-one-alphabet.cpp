#include <iostream>
#include <string>
using namespace std;

bool IsCorrect(string str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != str[0]) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    if(IsCorrect(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}