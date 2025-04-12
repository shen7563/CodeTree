import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String str[] = new String[20];
        int count = 0;
        int total_length = 0;
        for(int i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        String s = sc.next();
        for(int i = 0; i < n; i++) {
            if(str[i].charAt(0) == s.charAt(0)) {
                total_length += str[i].length();
                count++;
            }
        }
        System.out.printf("%d %.2f", count, (double)total_length / count);
        sc.close();
    }
}