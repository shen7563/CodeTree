import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();

        int numA = 0, numB = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) >= '0' && a.charAt(i) <= '9') {
                numA = numA * 10 + (a.charAt(i) - '0');
            } else {
                break;
            }
        }
        for (int i = 0; i < b.length(); i++) {
            if (b.charAt(i) >= '0' && b.charAt(i) <= '9') {
                numB = numB * 10 + (b.charAt(i) - '0');
            } else {
                break;
            }
        }
        System.out.println(numA + numB);

        sc.close();
    }
}