#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int height;
        double weight;
        Student(string n, int h, double w) {
            name = n;
            height = h;
            weight = w;
        }
        Student() {}
};

bool CompareName(Student a, Student b) {
    return a.name < b.name;
}

bool CompareHeight(Student a, Student b) {
    return a.height > b.height;
}
int main() {
    string name;
    int height;
    double weight;
    Student students[5];
    for(int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }
    cout << fixed;
    cout.precision(1);

    sort(students, students + 5, CompareName);
    cout << "name\n";
    for(int i = 0; i < 5; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << "\n";
    }

    sort(students, students + 5, CompareHeight);
    cout << "\nheight\n";
    for(int i = 0; i < 5; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << "\n";
    }
    return 0;
}