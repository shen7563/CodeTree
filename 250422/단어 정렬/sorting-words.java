import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String[] str = new String[n];
        for (int i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        Arrays.sort(str);
        for (int i = 0; i < n; i++) {
            System.out.println(str[i]);
        }
        sc.close();
    }
}