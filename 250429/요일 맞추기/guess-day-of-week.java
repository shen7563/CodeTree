import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m1 = sc.nextInt(); 
        int d1 = sc.nextInt(); 
        int m2 = sc.nextInt(); 
        int d2 = sc.nextInt();
        String[] weekdays = new String[] { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
        int[] daysInMonth = new int[] { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        boolean isReverse = false;
        if (m1 > m2 || (m1 == m2 && d1 > d2)) {
            int tempMonth = m1, tempDay = d1;
            m1 = m2;
            d1 = d2;
            m2 = tempMonth;
            d2 = tempDay;
            isReverse = true;
        }
        int totalDays = 0;
        if (m1 == m2) {
            totalDays = d2 - d1;
        } else {
            totalDays += daysInMonth[m1] - d1;
            for (int i = m1 + 1; i < m2; i++) {
                totalDays += daysInMonth[i];
            }
            totalDays += d2;
        }

        int startIndex = 0;
        int targetIndex = (startIndex + totalDays) % 7;

        if (isReverse) {
            targetIndex = (startIndex - totalDays % 7 + 7) % 7;
        }

        System.out.println(weekdays[targetIndex]);

        sc.close();
    }
}