#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str[10];
    int total_length = 0;
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
        total_length += str[i].length();
    }
    cout << total_length;
    return 0;
}