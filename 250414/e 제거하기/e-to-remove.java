import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        s = s.replaceFirst("e", "");
        System.out.println(s);
        sc.close();
    }
}