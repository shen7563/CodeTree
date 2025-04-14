#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int sum = n + m;
    int count = 0;
    string result = to_string(sum);
    for(int i = 0; i < result.length(); i++) {
        if(result[i] == '1') {
            count++;
        }
    }
    cout << count;
    return 0;
}