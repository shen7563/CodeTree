import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String A = sc.next();
        int count = 0;
        for(int i = 0; i < n; i++) {
            String B = sc.next();
            if(A.equals(B)) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}