#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int x = 0, y = 0;
int curr_dir = 3;
int main() {
    string dir;
    cin >> dir;
    for(int i = 0; i < dir.size(); i++) {
        char c_dir = dir[i];
        if(c_dir == 'L') {
            curr_dir = (curr_dir - 1 + 4) % 4;
        } else if(c_dir == 'R') {
            curr_dir = (curr_dir + 1) % 4;
        } else if(c_dir == 'F') {
            x += dx[curr_dir];
            y += dy[curr_dir];
        }
    }
    cout << x << " " << y;
    return 0;
}