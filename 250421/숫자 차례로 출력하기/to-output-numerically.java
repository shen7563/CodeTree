import java.util.Scanner;

public class Main {

    public static void printForward(int n) {
        if(n == 0) {
            return;
        }
        for(int i = 1; i <= n; i++) {
            System.out.print(i + " ");
        }
    }

    public static void printBackward(int n) {
        if(n == 0) {
            return;
        }
        for(int i = n; i >= 1; i--) {
            System.out.print(i + " ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        printForward(n);
        System.out.println();
        printBackward(n);
        sc.close();
    }
}
