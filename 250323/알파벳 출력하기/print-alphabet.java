import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int alpha = 65;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                if(alpha > 90) {
                    alpha = 65;
                }
                System.out.print((char)alpha);
                alpha++;
            }
            System.out.println();
        }
        sc.close();
    }
}