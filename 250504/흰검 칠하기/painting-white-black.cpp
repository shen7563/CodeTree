#include <iostream>
#include <climits>

#define MAX_K 100000

using namespace std;

int n;
int draw[2 * MAX_K + 1];
int countBlack[2 * MAX_K + 1];
int countWhite[2 * MAX_K + 1];
int black, white, gray;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int current = MAX_K;

    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;
        if(c == 'L') {
            while(x--) {
                draw[current] = 1;
                countWhite[current]++;
                if(x != 0) {
                    current--;

                }
            }
        }
        else {
            while(x--) {
                draw[current] = 2;
                countBlack[current]++;
                if(x != 0) {
                    current++;
                }
            }
        }
    }

    for(int i = 0; i < 2 * MAX_K + 1; i++) {
        if(countBlack[i] >= 2 && countWhite[i] >= 2) {
            gray++;
        }
        else if(draw[i] == 1) {
            white++;
        }
        else if(draw[i] == 2) {
            black++;
        }
    }
    cout << white << " " << black << " " << gray << "\n";
    return 0;
}