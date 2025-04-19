import java.util.Scanner;

public class Main {

    public static void cal(int a, String op, int b) {
        if(op.equals("+")) {
            System.out.printf("%d + %d = %d", a, b, a + b);
        }
        else if (op.equals("-")) {
            System.out.printf("%d - %d = %d", a, b, a - b);
        }
        else if(op.equals("/")) {
            System.out.printf("%d / %d = %d", a, b, a / b);
        }
        else if(op.equals("*")) {
            System.out.printf("%d * %d = %d", a, b, a * b);
        }
        else {
            System.out.println("False");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        String op = sc.next();
        int b = sc.nextInt();
        cal(a, op, b);

        sc.close();
    }
}
