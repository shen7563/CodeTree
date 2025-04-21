import java.util.Scanner;

public class Main {

    public static int count = 0;

    public static int nto1(int n) {
        if (n == 1) {
            return count;
        }
        count++;
        if (n % 2 == 0) {
            return nto1(n / 2);
        } else {
            return nto1(n / 3);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        System.out.println(nto1(n));
        sc.close();
    }
}
