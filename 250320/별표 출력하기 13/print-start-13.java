import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 1) {
                for(int j = n; j > i / 2; j--) {
                    System.out.print("* ");
                }
            }
            else {
                for(int j = 0; j < i / 2; j++) {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
        for(int i = n; i >= 1 ; i--) {
            if(i % 2 == 1) {
                for(int j = n; j > i / 2; j--) {
                    System.out.print("* ");
                }
            }
            else {
                for(int j = 0; j < i / 2; j++) {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}