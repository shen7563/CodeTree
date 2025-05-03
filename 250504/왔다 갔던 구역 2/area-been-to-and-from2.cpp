#include <iostream>
#include <climits>

#define MAX_N 1000
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];

int check[MAX_R + 1];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int current = 0;

    for(int i = 0; i < n; i++) {
        int distance;
        char direction;
        cin >> distance >> direction;
        if(direction == 'L') {
            x1[i] = current - distance;
            x2[i] = current;
            current -= distance;
        }
        else {
            x1[i] = current;
            x2[i] = current + distance;
            current += distance;
        }
        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }
    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            check[j]++;
        }
    }
    int count = 0;
    for(int i = 0; i <= MAX_R; i++) {
        if(check[i] >= 2) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}