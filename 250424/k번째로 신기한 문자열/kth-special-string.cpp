#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

bool Start(string str, string T) {
    if(str.length() < T.length()) {
        return false;
    }
    for(int i = 0; i < T.length(); i++) {
        if(str[i] != T[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    int count = 0;
    string T;
    string str[100];
    string ans[100];
    cin >> N >> K >> T;
    for(int i = 0; i < N; i++) {
        cin >> str[i];

        if(Start(str[i], T)) {
            ans[count] = str[i];
            count++;
        }
    }
    sort(ans, ans + count);
    cout << ans[K - 1];
    return 0;
}