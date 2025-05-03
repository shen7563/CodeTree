#include <iostream>
#include <climits>

#define MAX_N 100
#define MAX_X 100
using namespace std;

int n;
int a[MAX_N + 1], b[MAX_N + 1];
int block[MAX_X + 1];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = a[i]; j <= b[i]; j++) {
            block[j]++;
        }
    }
    int max = INT_MIN;
    for(int i = 1; i <= MAX_N; i++) {
        if(block[i] > max) {
            max = block[i];
        }
    }
    cout << max << "\n";
    return 0;
}