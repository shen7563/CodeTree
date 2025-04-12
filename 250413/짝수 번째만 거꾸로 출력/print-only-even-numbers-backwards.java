import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        String newString = "";
        for(int i = 0; i < str.length(); i++) {
            if((i + 1) % 2 == 0) {
                newString += str.charAt(i);
            }
        }
        for(int i = newString.length() - 1; i >= 0; i--) {
            System.out.print(newString.charAt(i));
        }
        sc.close();
    }
}