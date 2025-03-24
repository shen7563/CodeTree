#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char sym[3] = {' ',};
    int tem[3] = {0, };
    int emer[4] = {0, };
    int count = 0;
    for(int i = 0; i < 3; i++) {
        cin >> sym[i] >> tem[i];
        if(sym[i] == 'Y') {
            if(tem[i] >= 37) {
                emer[0]++;
                count++;
            }
            else {
                emer[2]++;
            }
        }
        else {
            if(tem[i] >= 37) {
                emer[1]++;
            }
            else {
                emer[3]++;
            }
        }
    }
    for(int i = 0; i < 4; i++) {
        cout << emer[i] << " ";
    }
    if(count >= 2) {
        cout << "E";
    }
    return 0;
}