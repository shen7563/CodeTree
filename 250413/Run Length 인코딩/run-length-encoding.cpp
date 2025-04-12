#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    string answer = "";
    char currnet = s[0];
    int count = 1;
    for(int i = 1; i < s.length(); i++) {
        if (s[i] == currnet) {
            count++;
        } else {
            answer += currnet + to_string(count);
            currnet = s[i];
            count = 1;
        }
    }
    answer += currnet + to_string(count);
    cout << answer.length() << "\n" << answer << "\n";

    return 0;
}