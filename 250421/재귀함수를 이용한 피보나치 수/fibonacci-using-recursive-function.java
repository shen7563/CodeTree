import java.util.Scanner;

public class Main {

    public static int fibo(int n) {
        if(n == 1) {
            return 1;
        }
        if(n == 2) {
            return 1;
        }
        if(n > 2) {
            return fibo(n - 1) + fibo(n - 2);
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        System.out.println(fibo(n));
        sc.close();
    }
}
