import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();

        if ((a + b).equals(b + a)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        sc.close();
    }
}