import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int m = sc.nextInt();
            if(m % 2 == 1 && m % 3 == 0) {
                System.out.println(m);
            }
        }
    }
}