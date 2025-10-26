#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int x = 0, y = 0;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char dir;
        int move;
        cin >> dir >> move;
        int c_dir;
        if(dir == 'E') {
            c_dir = 0;
        } else if(dir == 'W') {
            c_dir = 1;
        } else if(dir == 'S') {
            c_dir = 2;
        } else if(dir == 'N') {
            c_dir = 3;
        }
        x += dx[c_dir] * move;
        y += dy[c_dir] * move;
    }
    cout << x << " " << y;
    return 0;
}