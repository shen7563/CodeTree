import java.util.Scanner;

public class Main {

    public static int strangeSequence(int n) {
        if(n == 1) {
            return 1;
        }
        if(n == 2) {
            return 2;
        }
        return strangeSequence(n / 3) + strangeSequence(n - 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(strangeSequence(n));
        sc.close();
    }
}
