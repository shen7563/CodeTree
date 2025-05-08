#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_T 250

using namespace std;

int n, k, p, t;
int shake_num[MAX_N + 1];
bool infested[MAX_N + 1];

class Shake {
    public:
        int time;
        int p1;
        int p2;
        Shake(int time, int p1, int p2) {
            this->time = time;
            this->p1 = p1;
            this->p2 = p2;
        }
        Shake() {}
};

bool Compare(Shake a, Shake b) {
    return a.time < b.time;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k >> p >> t;
    infested[p] = true;

    Shake shakes[MAX_T + 1];

    for(int i = 0; i < t; i++) {
        int time, p1, p2;
        cin >> time >> p1 >> p2;
        shakes[i] = Shake(time, p1, p2);
    }
    sort(shakes, shakes + t, Compare);

    for(int i = 0; i < t; i++) {
        int target1 = shakes[i].p1;
        int target2 = shakes[i].p2;

        if(infested[target1]) {
            shake_num[target1]++;
        }
        if(infested[target2]) {
            shake_num[target2]++;
        }
        if(shake_num[target1] <= k && infested[target1] == true) {
            infested[target2] = true;
        }
        if(shake_num[target2] <= k && infested[target2] == true) {
            infested[target1] = true;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(infested[i]) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    return 0;
}