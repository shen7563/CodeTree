import java.util.Scanner;

public class Main {

    public static void gcd(int n, int m) {
        if(m == 0) {
            System.out.println(n);
            return;
        }
        gcd(m, n % m);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        gcd(n, m);
        sc.close();
    }
}
