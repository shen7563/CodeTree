#include <iostream>

#define MAX_N 201

using namespace std;

int n;
int x1, y1, x2, y2; // 직사각형의 좌표
bool area[MAX_N][MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n; //n개의 직사각형
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        // 직사각형의 좌표를 입력받고, 해당 영역을 true로 설정
        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                area[j][k] = true;
            }
        }
    }
    int cnt = 0; // 겹치는 영역의 개수
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(area[i][j]) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n"; // 겹치는 영역의 개수 출력
    return 0;
}