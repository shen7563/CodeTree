import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        int count_2 = 0;
        int count_3 = 0;
        int count_12 = 0;
        for(int i = 1; i <= n; i++) {
            if (i % 12 == 0) {
                count_12++;
            } else if (i % 3 == 0) {
                count_3++;
            } else if (i % 2 == 0) {
                count_2++;
            }
        }
        System.out.printf("%d %d %d", count_2, count_3, count_12);
        sc.close();
    }
}