import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();
        String str2 = sc.next();
        String str3 = sc.next();

        int str1_len = str1.length();
        int str2_len = str2.length();
        int str3_len = str3.length();

        int max = Integer.MIN_VALUE;
        if(str1_len > max) {
            max = str1_len;
        }
        if(str2_len > max) {
            max = str2_len;
        }
        if(str3_len > max) {
            max = str3_len;
        }
        int min = Integer.MAX_VALUE;
        if(str1_len < min) {
            min = str1_len;
        }
        if(str2_len < min) {
            min = str2_len;
        }
        if(str3_len < min) {
            min = str3_len;
        }

        System.out.println(max - min);

        sc.close();
    }
}