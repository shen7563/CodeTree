import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int div = n;
        int count = 0;
        for(int i = 1; i <= n; i++) {
            div /= i;
            count++;
            if(div <= 1) {
                System.out.println(count);
                break;
            }
        }

        sc.close();
    }
}