#include <iostream>
#include <climits>

#define MAX_N 2001
#define OFFSET 1000 // 좌표를 음수로 만들지 않기 위해

using namespace std;

int x1[2], y1[2], x2[2], y2[2]; // 직사각형 좌표
bool area[MAX_N][MAX_N]; // 직사각형 면적
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0]; // 직사각형 1 좌표
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1]; // 직사각형 2 좌표
    x1[0] += OFFSET; y1[0] += OFFSET; x2[0] += OFFSET; y2[0] += OFFSET; // 좌표를 양수로 변환
    x1[1] += OFFSET; y1[1] += OFFSET; x2[1] += OFFSET; y2[1] += OFFSET; // 좌표를 양수로 변환

    for(int i = x1[0]; i < x2[0]; i++) { // 직사각형 1 면적
        for (int j = y1[0]; j < y2[0]; j++) {
            area[i][j] = true;
        }
    }
    for(int i = x1[1]; i < x2[1]; i++) {// 직사각형 2 면적
        for (int j = y1[1]; j < y2[1]; j++) {
            area[i][j] = false;
        }
    }
    int minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN; // 직사각형 1과 2의 교차 영역 좌표
    for(int i = 0; i < MAX_N; i++) { // 직사각형 1과 2의 교차 영역 좌표 찾기
        for (int j = 0; j < MAX_N; j++) {
            if (area[i][j]) {
                minX = min(minX, i);
                minY = min(minY, j);
                maxX = max(maxX, i);
                maxY = max(maxY, j);
            }
        }
    }
    int result = 0; // 교차 영역 넓이
    if(minX <= maxX && minY <= maxY) { // 교차 영역이 존재하는 경우
        result = (maxX - minX + 1) * (maxY - minY + 1); // 교차 영역 넓이 계산
    }
    cout << result; // 결과 출력
    return 0;
}