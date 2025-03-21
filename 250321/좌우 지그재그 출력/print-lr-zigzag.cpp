#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int count = 1;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= n; j++) {
                cout << count << " ";
                count++;
            }
        }
        else {
            count += n;
            for(int j = 1; j <= n; j++) {
                count--;
                cout << count << " ";
            }
            count += n;
        }
        cout << "\n";
    }

    return 0;
}