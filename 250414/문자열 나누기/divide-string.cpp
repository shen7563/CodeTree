#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s[10];
    string answer;
    int n;
        
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
        
    for(int i = 0; i < n; i++) {
        answer += s[i];
    }
        
    for(int i = 0; i < answer.length(); i++) {
        cout << answer[i];
        if((i + 1) % 5 == 0)
            cout << "\n";
     }
    
    return 0;
}