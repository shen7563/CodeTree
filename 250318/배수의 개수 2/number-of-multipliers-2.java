import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        for (int i = 0; i < 10; i++) {
            int n = sc.nextInt();
            if(n % 2 == 1) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}