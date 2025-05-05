#include <iostream>

#define MAX_N 1000001

using namespace std;

int a_pos[MAX_N];
int b_pos[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a_time = 1;
    int b_time = 1;
    for (int i = 0; i < n; i++)
    {
        int a_vel, a_times;
        cin >> a_vel >> a_times;
        for (int j = 0; j < a_times; j++)
        {
            a_pos[a_time] = a_pos[a_time - 1] + a_vel;
            a_time++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int b_vel, b_times;
        cin >> b_vel >> b_times;
        for (int j = 0; j < b_times; j++)
        {
            b_pos[b_time] = b_pos[b_time - 1] + b_vel;
            b_time++;
        }
    }

    int leader = 0, answer = 0;
    for (int i = 1; i < a_time; i++)
    {
        if (a_pos[i] > b_pos[i])
        {
            if (leader == 2)
            {
                answer++;
            }
            leader = 1;
        }
        else if (a_pos[i] < b_pos[i])
        {
            if (leader == 1)
            {
                answer++;
            }
            leader = 2;
        }
    }
    cout << answer;
    return 0;
}