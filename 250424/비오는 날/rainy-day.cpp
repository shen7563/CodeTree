#include <iostream>
#include <string>
using namespace std;

class Forecast {
    public:
        string date;
        string day;
        string weather;
        Forecast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
        Forecast() {};
};

Forecast ans = Forecast("9999-99-99", "", "");

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string date, day, weather;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> date >> day >> weather;
        Forecast forecast = Forecast(date, day, weather);
        if(weather == "Rain") {
            if(ans.date >= forecast.date) {
                ans = forecast;
            }
        }
    }
    cout << ans.date << " " << ans.day << " " << ans.weather;
    return 0;
}