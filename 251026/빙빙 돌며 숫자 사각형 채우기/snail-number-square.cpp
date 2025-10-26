#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int cur_dir = 0;
int x = 0, y = 0;
int arr[100][100] = {0};

bool InRange(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}
int main() {
    int n, m;
    cin >> n >> m;
    
    int count = 1;
    arr[x][y] = count;
    
    for(int i = 0; i < n * m - 1; i++) {
        int nx = x + dx[cur_dir];
        int ny = y + dy[cur_dir];
        if(!InRange(nx, ny, n, m) || arr[nx][ny] != 0) {
            cur_dir = (cur_dir + 1) % 4;
            nx = x + dx[cur_dir];
            ny = y + dy[cur_dir];
        }
        x = nx;
        y = ny;
        arr[x][y] = ++count;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}