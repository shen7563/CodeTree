import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        if((int)s.charAt(0) == 'z') {
            System.out.println("a");
        }
        else {
            int n = (int)s.charAt(0) + 1;
            System.out.println((char)n);
        }
        sc.close();
    }
}