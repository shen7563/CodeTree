import java.util.Scanner;

public class Main {

    public static boolean function1(int x) {
        String str = Integer.toString(x);
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '3' || str.charAt(i) == '6' || str.charAt(i) == '9') {
                return true;
            }
        }
        return false;
    }

    public static int function2(int a, int b) {
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (i % 3 == 0 || function1(i)) {
                count++;

            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println(function2(a, b));
        sc.close();
    }
}