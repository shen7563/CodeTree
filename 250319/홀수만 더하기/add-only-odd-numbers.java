import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int m = sc.nextInt();
            if(m % 2 != 0 && m % 3 == 0) {
                sum += m;
            }
        }
        System.out.println(sum);
        sc.close();
    }
}