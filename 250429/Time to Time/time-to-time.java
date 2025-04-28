import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a_hour = sc.nextInt();
        int a_minute = sc.nextInt();
        int b_hour = sc.nextInt();
        int b_minute = sc.nextInt();

        int total = 0;
        while(true) {
            if(a_hour == b_hour && a_minute == b_minute) {
                break;
            }
            total++;
            a_minute++;
            if(a_minute == 60) {
                a_minute = 0;
                a_hour++;
            }
        }
        System.out.println(total);
        sc.close();
    }
}