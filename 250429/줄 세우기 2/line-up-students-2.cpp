#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int height, weight, number;
        Student(int h, int w, int n) {
            height = h;
            weight = w;
            number = n;
        }
        Student() {}
};

bool Compare(Student a, Student b) {
    if(a.height != b.height) {
        return a.height < b.height;
    }
    return a.weight > b.weight;
}
int main() {
    int n, height, weight;
    Student students[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> height >> weight;
        students[i] = Student(height, weight, i + 1);
    }
    sort(students, students + n, Compare);
    for(int i = 0; i < n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << "\n";
    }
    return 0;
}