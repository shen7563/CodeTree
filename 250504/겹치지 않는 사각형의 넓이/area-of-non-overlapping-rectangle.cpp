#include <iostream>

#define MAX_N 2001
#define OFFSET 1000 // 좌표를 음수로 만들지 않기 위해

using namespace std;

int x1, y1, x2, y2; // 직사각형의 좌표

bool area[MAX_N][MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 3; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(i < 2) { // 첫 번째와 두 번째 직사각형은 겹치는 부분을 true로 설정
            for(int j = x1 + OFFSET; j < x2 + OFFSET; j++) {
                for(int k = y1 + OFFSET; k < y2 + OFFSET; k++) {
                    area[j][k] = true; // 직사각형의 영역을 true로 설정
                }
            }
        } else { // 세 번째 직사각형은 겹치는 부분을 false로 설정
            for(int j = x1 + OFFSET; j < x2 + OFFSET; j++) {
                for(int k = y1 + OFFSET; k < y2 + OFFSET; k++) {
                    area[j][k] = false;
                }
            }
        }
    }
    int count = 0;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(area[i][j]) { // true인 부분의 개수를 세기
                count++;
            }
        }
    }
    cout << count << "\n"; // 결과 출력
    return 0;
}