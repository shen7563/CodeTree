#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n[100] = {0 ,};
    int count[11] = {0,};
    for(int i = 0; i < 100; i++) {
        cin >> n[i];
        if(n[i] == 0) {
            break;
        }
        count[n[i]/10]++;
    }
    for(int i = 1; i < 10; i++) {
        cout << i << " - " << count[i] << "\n";
    }
    return 0;
}