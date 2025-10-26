#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dir = 0;
int x = 0, y = 0;

int main() {
    string commands;
    int time = 0;
    cin >> commands;
    for(int i = 0; i < commands.size(); i++) {
        char command = commands[i];
        if(command == 'L') {
            dir = (dir - 1 + 4) % 4;
            time++;
        }
        else if (command == 'R') {
            dir = (dir + 1) % 4;
            time++;
        }
        else if(command == 'F') {
            x += dx[dir];
            y += dy[dir];
            time++;
        }
        if(x == 0 && y == 0) {
            cout << time << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}