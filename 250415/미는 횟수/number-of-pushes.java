import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String A = sc.next();
        String B = sc.next();
        int count = 0;
        while(!A.equals(B)) {
            B = B.substring(1) + B.charAt(0);
            count++;
            if(count > A.length()) {
                System.out.println(-1);
                return;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
