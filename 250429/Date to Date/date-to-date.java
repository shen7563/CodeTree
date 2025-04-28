import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a_month = sc.nextInt();
        int a_day = sc.nextInt();
        int b_month = sc.nextInt();
        int b_day = sc.nextInt();

        int total_days = 1;
        int[] month_in_days = new int[] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        while(true) {
            if(a_month == b_month && a_day == b_day) {
                break;
            }
            total_days++;
            a_day++;
            if(a_day > month_in_days[a_month]) {
                a_day = 1;
                a_month++;
                if(a_month > 12) {
                    a_month = 1;
                }
            }
        }
        System.out.println(total_days);
        sc.close();
    }
}