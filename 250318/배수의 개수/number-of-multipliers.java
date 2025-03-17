import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count1 = 0;
        int count2 = 0;
        for(int i =0;i<10;i++) {
            int n = sc.nextInt();
            if(n % 3 == 0) {
                count1++;
            }
            if(n % 5 == 0) {
                count2++;
            }
        }
        System.out.printf("%d %d", count1, count2);
        sc.close();
    }
}