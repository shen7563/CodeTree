import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int i = a;
        int j = b;

        while(i >= j) {
            System.out.print(i + " ");
            i -= 2;
        }
    }
}