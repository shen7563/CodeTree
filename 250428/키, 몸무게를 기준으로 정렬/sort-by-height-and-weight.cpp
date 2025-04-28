#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int height, weight;
        Student(string n, int h, int w) {
            name = n;
            height = h;
            weight = w;
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
    string name;
    int height, weight;
    Student students[10];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }
    sort(students, students + n, Compare);
    
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << "\n";
    }
    return 0;
}