#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n = 0, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= n; j++) {
                count++;
                cout << count << " ";
            }
        }
        else {
            for(int j = 1; j <= n; j++) {
                count += 2;
                cout << count << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}