import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();

        if(s.charAt(0) == 'S') {
            System.out.println("Superior");
        }
        else if (s.charAt(0) == 'A') {
            System.out.println("Excellent");
        }
        else if (s.charAt(0) == 'B') {
            System.out.println("Good");
        }
        else if (s.charAt(0) == 'C') {
            System.out.println("Usually");
        }
        else if (s.charAt(0) == 'D') {
            System.out.println("Effort");
        }
        else {
            System.out.println("Failure");
        }
    }
}