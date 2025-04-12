import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        String encoded = "";

        int count = 1;
        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                encoded += str.charAt(i - 1) + "" + count;
                count = 1;
            }
        }
        encoded += str.charAt(str.length() - 1) + "" + count;

        System.out.println(encoded.length()); 
        System.out.println(encoded); 

        sc.close();
    }
}