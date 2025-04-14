import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            String s = sc.next();
            if(s.equals("END")) {
                break;
            }
            else {
                StringBuilder sr = new StringBuilder(s);
                sr.reverse();
                System.out.println(sr.toString());
            }
        }
        sc.close();
    }
}