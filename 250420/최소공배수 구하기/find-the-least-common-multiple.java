import java.util.Scanner;

public class Main {

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public static void lcm(int a, int b) {
        System.out.println(a * b / gcd(a, b));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        lcm(n, m);
        sc.close();
    }
}
