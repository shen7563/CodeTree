import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String remove = sc.next();

        while(s.contains(remove)) {
            s = s.replaceFirst(remove, "");
        }
        System.out.println(s);
        sc.close();
    }
}