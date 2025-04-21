import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int count = 0;
        String t = sc.next();
        String[] str = new String[n];
        String[] new_str = new String[count];
        for(int i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        Arrays.sort(str);
        for(int i = 0; i < n; i++) {
            if(str[i].contains(t)) {
                count++;
            }
            if(k == count) {
                System.out.println(str[i]);
                break;
            }
        }
        sc.close();
    }
}