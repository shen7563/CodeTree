#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, count = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(count > 4) {
                count = 1;
            }
            cout << count * 2 << " ";
            count++;
        }
        cout << "\n";
    }
    return 0;
}