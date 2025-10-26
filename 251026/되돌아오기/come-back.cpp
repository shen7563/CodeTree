#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int x = 0, y = 0;
int dir = 0;
int main() {
    int n;
    int time = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char move;
        int steps;
        cin >> move >> steps;
        if(move == 'N') {
            dir = 0;
        } else if(move == 'S') {
            dir = 1;
        } else if(move == 'E') {
            dir = 2;
        } else if(move == 'W') {
            dir = 3;
        }
        for(int j = 0; j < steps; j++) {
            x += dx[dir];
            y += dy[dir];
            time++;
            //0,0으로 돌아오면 time 출력 후 종료
            //돌아오지 못하면 -1 출력
            if(x == 0 && y == 0) {
                cout << time;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}