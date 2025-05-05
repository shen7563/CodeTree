#include <iostream>

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
    cin >> n >> m;

    int a_time = 1;
    int b_time = 1;
    for(int i = 0; i < n; i++) {
        char a_move;
        int a_move_time;
        cin >> a_move >> a_move_time;
        if(a_move == 'R') {
            for(int i = 0; i < a_move_time; i++) {
                a_pos[a_time] = a_pos[a_time - 1] + 1;
                a_time++;
            }
        }
        else {
            for(int i = 0; i < a_move_time; i++) {
                a_pos[a_time] = a_pos[a_time - 1] - 1;
                a_time++;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        char b_move;
        int b_move_time;
        cin >> b_move >> b_move_time;
        if(b_move == 'R') {
            for(int i = 0; i < b_move_time; i++) {
                b_pos[b_time] = b_pos[b_time - 1] + 1;
                b_time++;
            }
        }
        else {
            for(int i = 0; i < b_move_time; i++) {
                b_pos[b_time] = b_pos[b_time - 1] - 1;
                b_time++;
            }
        }
    }

    int meet = 0;
    bool isMeet = false;
    for(int i = 1; i < a_time; i++) {
        if(a_pos[i] == b_pos[i]) {
            meet = i;
            isMeet = true;
            break;
        }
    }
    if(isMeet) {
        cout << meet;
    }
    else {
        cout << -1;
    }
    return 0;
}