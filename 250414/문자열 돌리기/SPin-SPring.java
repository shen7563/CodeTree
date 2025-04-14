import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        for(int i = 0; i < s.length() + 1; i++) {
            System.out.println(s);
            s = s.substring(s.length() - 1) + s.substring(0, s.length() - 1);
        }
        sc.close();
    }
}