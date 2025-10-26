#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool check[101][101] = {false};

bool isValid(int r, int c, int n) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}
int main() {
    int n, m;
    int isComfortable = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        check[r][c] = true;
        for(int j = 0; j < 4; j++) {
            int nr = r + dx[j];
            int nc = c + dy[j];
            if(check[nr][nc] && isValid(nr, nc, n)) {
                isComfortable++;
            }
        }
        if(isComfortable == 3) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
        isComfortable = 0;
    }
    return 0;
}