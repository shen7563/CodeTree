#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int max = INT_MIN;
    int offset = 100;
    int x1[101], x2[101];
    int check[201] = {0};

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i] += offset;
        x2[i] += offset;
    }
    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            check[j]++;
        }
    }
    for(int i = 0; i < 201; i++) {
        if(check[i] > max) {
            max = check[i];
        }
    }
    cout << max << "\n";
    return 0;
}