#include <iostream>
#include <string>
using namespace std;

class Spy {
    public:
        string code;
        char place;
        int time;

        Spy(string code, char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string code;
    char place;
    int time;
    cin >> code >> place >> time;
    Spy spy = Spy(code, place, time);
    cout << "secret code : " << spy.code << "\n";
    cout << "meeting point : " << spy.place << "\n";
    cout << "time : " << spy.time;
    return 0;
}