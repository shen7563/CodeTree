import java.util.Scanner;

public class Main {

    public static int collatz(int n) {
        if(n == 1) {
            return 0;
        }
        if(n % 2 == 0) {
            return 1 + collatz(n / 2);
        } else {
            return 1 + collatz(3 * n + 1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(collatz(n));
        sc.close();
    }
}
