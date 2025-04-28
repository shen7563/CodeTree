#include <iostream>
#include <algorithm>
using namespace std;

class Number {
    public:
        int number, index;
        Number(int n, int i) {
            number = n;
            index = i;
        }
        Number() {}
};

bool Compare(Number a, Number b) {
    if(a.number != b. number) {
        return a.number < b.number;
    }
    return a.index < b.index;
}
int main() {

    int n, number;
    int ans[1000];
    Number numbers[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> number;
        numbers[i] = Number(number, i);
    }
    sort(numbers, numbers + n, Compare);
    for(int i = 0; i < n; i++) {
        ans[numbers[i].index] = i + 1;
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}