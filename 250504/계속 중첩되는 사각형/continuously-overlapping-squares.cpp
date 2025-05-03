#include <iostream>
#include <climits>

#define MAX_N 201
#define OFFSET 100

using namespace std;

int n;
int x1[10], y1[10], x2[10], y2[10];
bool area[MAX_N][MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    bool isBlue = false;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
        for(int j = x1[i]; j < x2[i]; j++) {
            for(int k = y1[i]; k < y2[i]; k++) {
                area[j][k] = isBlue;
            }
        }
        isBlue = !isBlue;
    }
    int blueCount = 0;
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_N; j++) {
            if(area[i][j]) {
                blueCount++;
            }
        }
    }
    cout << blueCount << "\n";
    return 0;
}