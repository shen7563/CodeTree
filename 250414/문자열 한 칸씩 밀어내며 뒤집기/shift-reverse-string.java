import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            int q = sc.nextInt();
            if(q == 1) {
                s = s.substring(1) + s.charAt(0);
                System.out.println(s);
            }
            else if(q == 2) {
                s = s.charAt(s.length() - 1) + s.substring(0, s.length() - 1);
                System.out.println(s);
            }
            else if(q == 3) {
                String reverse = "";
                for(int j = s.length() - 1; j >= 0; j--) {
                    reverse += s.charAt(j);
                }
                s = reverse;
                System.out.println(s);
            }
        }
        sc.close();
    }
}