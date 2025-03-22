#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int start = 0, end = 0, count_1 = 0, count_2 = 0;
    cin >> start >> end;
    for(int i = start; i <= end; i++) {
        count_1 = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                count_1++;
            }
        }
        if(count_1 == 3) {
            count_2++;
        }
    }
    cout << count_2;
    return 0;
}