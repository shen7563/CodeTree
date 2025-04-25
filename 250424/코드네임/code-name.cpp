#include <iostream>
#include <string>
using namespace std;

class User {
    public:
        char name;
        int score;
        User(char name, int score) {
            this->name = name;
            this->score = score;
        }
        User() {}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    User user[5];
    char name;
    int score;
    for(int i = 0; i < 5; i++) {
        cin >> name >> score;
        user[i] = User(name, score);
    }
    int index = 0;
    for(int i = 1; i < 5; i++) {
        if(user[index].score > user[i].score) {
            index = i;
        }
    }
    cout << user[index].name << " " << user[index].score;
    return 0;
}