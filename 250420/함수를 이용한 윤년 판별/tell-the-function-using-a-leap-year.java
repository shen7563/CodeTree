import java.util.Scanner;

public class Main {

    public static boolean isYunyear(int year) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        if(isYunyear(n)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        sc.close();
    }
}
