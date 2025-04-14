import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) >= 65 && s.charAt(i) <= 90 || s.charAt(i) >= 97 && s.charAt(i) <= 122) {
                if(s.charAt(i) >= 97 && s.charAt(i) <= 122) {
                    System.out.print((char)(s.charAt(i) - 32));
                }
                else {
                    System.out.print(s.charAt(i));
                }
            }
        }
        sc.close();
    }
}