import java.util.Scanner;

public class Main {

    public static int sum(int n) {
        if(n < 10) {
            return n;
        } else {
            return n % 10 + sum(n / 10);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int mul = a * b * c;

        System.out.println(sum(mul));
        sc.close();
    }
}
