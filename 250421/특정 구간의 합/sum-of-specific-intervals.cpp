#include <iostream>
using namespace std;


int n, m;
int arr[100];
int a1, a2;

int Cal() {
    int sum = 0;
    for(int i = a1 - 1; i < a2; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> a1 >> a2;
        cout << Cal() << "\n";
    }
    return 0;
}