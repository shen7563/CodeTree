import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 1;
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 1) {
                for(int j = 1; j <= n; j++) {
                    System.out.print(count + " ");
                    count++;
                }
            }
            else {
                count += n;
                for(int j = 1; j <= n; j++) {
                    count--;
                    System.out.print(count + " ");
                }
                count += n;
            }
            System.out.println();
        }
        sc.close();
    }
}