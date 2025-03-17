#include <iostream>
using namespace std;

int main()
{
    char f_sym, s_sym, t_sym = ' ';
    int f_tem, s_tem, t_tem, count = 0;
    cin >> f_sym >> f_tem >> s_sym >> s_tem >> t_sym >> t_tem;

    if(f_sym == 'Y' && f_tem >= 37) {
        count++;
    }
    if(s_sym == 'Y' && s_tem >= 37) {
        count++;
    }
    if(t_sym == 'Y' && t_tem >= 37) {
        count++;
    }

    if(count >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}