#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            continue;
        }
        if(i % 3 == 0) {
            continue;
        }
        if(i % 5 == 0) {
            continue;
        }
        count++;
    }
    cout << count;
    return 0;
}