#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    int max = INT_MIN;
    int answer[101];
    int a[101], b[101];
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < k; i++) {
        for(int j = a[i]; j <= b[i]; j++) {
            answer[j]++;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(answer[i] > max) {
            max = answer[i];
        }
    }
    cout << max << "\n";
    return 0;
}