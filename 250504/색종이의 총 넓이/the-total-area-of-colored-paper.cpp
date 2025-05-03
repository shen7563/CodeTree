#include <iostream>

#define MAX_N 201
#define OFFSET 100 // 좌표 양수
using namespace std;

int n;
int x, y;
bool area[MAX_N][MAX_N]; // 직사각형 면적
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        for(int j = x + OFFSET; j < x + 8 + OFFSET; j++) {
            for(int k = y + OFFSET; k < y + 8 + OFFSET; k++) {
                area[j][k] = true; // 직사각형 면적
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(area[i][j]) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n"; // 면적의 넓이 출력
    return 0;
}