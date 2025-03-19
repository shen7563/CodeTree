import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int count = 0;
        while(true) {
            if(n == 1) {
                System.out.println(count);
                break;
            }
            else if(n % 2 == 0) {
                n /= 2;
                count++;
            }
            else {
                n = 3 * n + 1;
                count++;
            }
        }
        sc.close();
    }
}