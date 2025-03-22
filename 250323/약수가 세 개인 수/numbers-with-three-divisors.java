import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int start = sc.nextInt();
        int end = sc.nextInt();
        int count_1 = 0;
        int count_2 = 0;
        for (int i = start; i <= end; i++) {
            count_1 = 0;
            for(int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count_1++;
                }
            }
            if(count_1 == 3) {
                count_2++;
            }
        }
        System.out.println(count_2);
        sc.close();
    }
}