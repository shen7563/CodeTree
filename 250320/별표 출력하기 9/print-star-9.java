import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n - 1; j++) {
                System.out.printf("  ");
            }
            for(int j = 1; j <= 2 * i + 1; j++) {
                System.out.printf("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}