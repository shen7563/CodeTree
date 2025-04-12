#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n = 0;
    string str[10];
    int total_length = 0;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        total_length += str[i].length();
        if(str[i][0] == 'a') {
            count++;
        }
    }
    cout << total_length << " " << count;
    return 0;
}