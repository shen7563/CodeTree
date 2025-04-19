import java.util.Scanner;

public class Main {

    public static boolean isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    public static int sumOfDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public static void f(int a, int b) {
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (isPrime(i) && sumOfDigits(i) % 2 == 0) {
                count++;
            }
        }
        System.out.println(count);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        f(a, b);
        sc.close();
    }
}
