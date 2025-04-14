#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        cout << (char)n << " ";
    }
    return 0;
}