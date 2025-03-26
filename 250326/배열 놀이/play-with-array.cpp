#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0, q = 0;
    int arr[100] = {0 ,};
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++) {
        int type = 0;
        cin >> type;
        if(type == 1) {
            int a = 0;
            cin >> a;
            cout << arr[a - 1] << "\n";
        }
        else if(type == 2) {
            int b = 0;
            int count = 0;
            cin >> b ;
            for(int j = 0; j < n; j++) {
                if(arr[j] == b) {
                    cout << j + 1 << "\n";
                    break;
                }
                else {
                    count++;
                }
            }
            if(count == n) {
                cout << 0 << "\n";
            }
        }
        else {
            int s = 0, e = 0;
            cin >> s >> e;
            for(int j = s - 1; j < e; j++) {
                cout << arr[j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}