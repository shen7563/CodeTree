import java.util.Scanner;
import java.util.Arrays;

class Program {
    String date;
    String day;
    String weather;

    public Program() {};
    public Program(String date, String day, String weather) {
        this.date = date;
        this.day = day;
        this.weather = weather;
    }
}
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int index = 0;
        int min_year = Integer.MAX_VALUE;
        int min_month = Integer.MAX_VALUE;
        int min_day = Integer.MAX_VALUE;
        Program[] program = new Program[n];
        for (int i = 0; i < n; i++) {
            String date = sc.next();
            String day = sc.next();
            String weather = sc.next();
            program[i] = new Program(date, day, weather);
        }
        for(int i = 0; i < n; i++) {
            if(program[i].weather.equals("Rain")) {
                String[] date = program[i].date.split("-");
                int year = Integer.parseInt(date[0]);
                int month = Integer.parseInt(date[1]);
                int day = Integer.parseInt(date[2]);
                if(year < min_year) {
                    min_year = year;
                    min_month = month;
                    min_day = day;
                    index = i;
                } else if(year == min_year) {
                    if(month < min_month) {
                        min_month = month;
                        min_day = day;
                        index = i;
                    } else if(month == min_month) {
                        if(day < min_day) {
                            min_day = day;
                            index = i;
                        }
                    }
                }
            }
        }
        System.out.println(program[index].date + " " + program[index].day + " " + program[index].weather);
        sc.close();
    }
}