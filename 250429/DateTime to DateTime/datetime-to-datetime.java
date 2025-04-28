import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int start_day = 11;
        int start_hour = 11;
        int start_minute = 11;
        int day = sc.nextInt();
        int hour = sc.nextInt();
        int minute = sc.nextInt();
        boolean check = true;
        int total_minutes = 0;
        while(true) {
            if(start_day == day && start_hour == hour && start_minute == minute) {
                break;
            }
            if(day < start_day || (day == start_day && hour < start_hour) || (day == start_day && hour == start_hour && minute < start_minute)) {
                
                check = false;
                break;
            }
            total_minutes++;
            start_minute++;
            if(start_minute == 60) {
                start_minute = 0;
                start_hour++;
            }
            if(start_hour == 24) {
                start_hour = 0;
                start_day++;
            }
        }
        if(check) {
            System.out.println(total_minutes);
        } else {
            System.out.println(-1);
        }
        sc.close();
    }
}