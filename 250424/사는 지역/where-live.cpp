#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        string address;
        string place;
        Person(string name, string address, string place) {
            this->name = name;
            this->address = address;
            this->place = place;
        }
        Person() {};
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string name, address, place;
    Person person[10];
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> name >> address >> place;
        person[i] = Person(name, address, place);
    }

    int index = 0;
    for(int i = 0; i < n; i++) {
        if(person[i].name > person[index].name) {
            index = i;
        }
    }
    cout << "name " << person[index].name << "\n";
    cout << "addr " << person[index].address << "\n";
    cout << "city " << person[index].place << "\n";
    return 0;
}