import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String t = sc.next();

        int sum = (int)s.charAt(0) + (int)t.charAt(0);
        int minus;
        if(s.charAt(0) > t.charAt(0)) {
            minus = (int)s.charAt(0) - (int)t.charAt(0);
        } else {
            minus = (int)t.charAt(0) - (int)s.charAt(0);
        }
        System.out.println(sum + " " + minus);
        sc.close();
    }
}