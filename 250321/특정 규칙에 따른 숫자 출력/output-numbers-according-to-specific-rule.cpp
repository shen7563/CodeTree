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
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = n - i; j > 0; j--) {
            if(count == 10) {
                count = 1;
            }
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
    return 0;
}