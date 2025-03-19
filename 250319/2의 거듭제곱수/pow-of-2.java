import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 1;
        while(true) {
            n /= 2;
            if(n == 1) {
                System.out.println(count);
                break;
            }
            count++;
        }
        sc.close();
    }
}