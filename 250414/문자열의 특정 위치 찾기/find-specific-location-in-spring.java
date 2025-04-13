import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String t = sc.next();
        if(s.indexOf(t) == -1) {
            System.out.println("No");
        } else {
            System.out.println(s.indexOf(t));
        }
        sc.close();
    }
}