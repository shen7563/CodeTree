#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    for(int i = 1; i <= 2 * n + 1; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= 2 * n + 1; j++) {
                cout << "* ";
            }
        }
        else {
            for(int j = 1; j <= 2 * n + 1; j++) {
                if(j % 2 == 0) {
                    cout << "  ";
                }
                else {
                    cout << "* ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}