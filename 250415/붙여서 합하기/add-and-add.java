import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();
        int a_b = Integer.parseInt(a + b);
        int b_a = Integer.parseInt(b + a);
        System.out.println(a_b + b_a);
        sc.close();
    }
}