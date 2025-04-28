#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Distance {
    public:
        int x, y, index;
        Distance(int x, int y, int index) {
            this->x = x;
            this->y = y;
            this->index = index;
        }
        Distance() {};
};

bool Compare(Distance a, Distance b) {
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}
int main() {
    int n, x, y;
    Distance distances[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        distances[i] = Distance(x, y, i + 1);
    }
    sort(distances, distances + n, Compare);
    for(int i = 0; i < n; i++) {
        cout << distances[i].index << "\n";
    }

    return 0;
}