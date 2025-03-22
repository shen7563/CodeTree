#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int start = 0, end = 0, count = 0;
    cin >> start >> end;
    for(int i = start; i <= end; i++) {
        int sum = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            count++;
        }
    }
    cout << count;
    return 0;
}