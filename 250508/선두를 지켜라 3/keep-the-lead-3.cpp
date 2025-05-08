#include <iostream>
#include <algorithm>

#define MAX_N 1000000

using namespace std;

int n, m;
int a_pos[MAX_N + 1];
int b_pos[MAX_N + 1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int a_time = 1, b_time = 1;
    for(int i = 0; i < n; i++) {
        int a_v, a_t;
        cin >> a_v >> a_t;
        for(int i = 0; i < a_t; i++) {
            a_pos[a_time] = a_pos[a_time - 1] + a_v;
            a_time++;
        }
    }
    for(int i = 0; i < m; i++) {
        int b_v, b_t;
        cin >> b_v >> b_t;
        for(int i = 0; i < b_t; i++) {
            b_pos[b_time] = b_pos[b_time - 1] + b_v;
            b_time++;
        }
    }
    int leader = 0, answer = 0;
    for(int i = 1; i < a_time; i++) {
        if(a_pos[i] > b_pos[i]) {
            if(leader != 1) {
                answer++;
            }
            leader = 1;
        }
        else if (a_pos[i] < b_pos[i]) {
            if(leader != 2) {
                answer++;
            }
            leader = 2;
        }
        else {
            if(leader != 3) {
                answer++;
            }
            leader = 3;
        }
    }
    cout << answer;
    return 0;
}