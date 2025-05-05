#include <iostream>
#include <cmath>
#define MAX_N 1000001

using namespace std;

int a_pos[MAX_N];
int b_pos[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int a_time = 1, b_time = 1;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int a;
        char a_move;
        cin >> a >> a_move;
        if(a_move == 'R') {
            for(int j = 0; j < a; j++) {
                a_pos[a_time] = a_pos[a_time - 1] + 1;
                a_time++;
            }
        }
        else {
            for(int j = 0; j < a; j++) {
                a_pos[a_time] = a_pos[a_time - 1] - 1;
                a_time++;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        int b;
        char b_move;
        cin >> b >> b_move;
        if(b_move == 'R') {
            for(int j = 0; j < b; j++) {
                b_pos[b_time] = b_pos[b_time - 1] + 1;
                b_time++;
            }
        }
        else {
            for(int j = 0; j < b; j++) {
                b_pos[b_time] = b_pos[b_time - 1] - 1;
                b_time++;
            }
        }
    }

    if(a_time > b_time) {
        for(int i = b_time; i < a_time; i++) {
            b_pos[i] = b_pos[b_time - 1];
        }
    }
    else if(b_time > a_time) {
        for(int i = a_time; i < b_time; i++) {
            a_pos[i] = a_pos[a_time - 1];
        }
    }
    int meetCount = 0;
    for(int i = 1; i < max(a_time, b_time); i++) {
        if(a_pos[i] == b_pos[i]) {
            if(i == 1 || a_pos[i - 1] == b_pos[i - 1]) {
                continue;
            }
            meetCount++;
        }
    }
    cout << meetCount;
    return 0;
}