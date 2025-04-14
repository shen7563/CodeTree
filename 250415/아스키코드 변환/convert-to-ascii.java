import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int n = sc.nextInt();
        System.out.print((int)s.charAt(0) + " " + (char)n);

        sc.close();
    }
}