import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String t = sc.next();
        int count = 0;
        for(int i = 0; i < s.length() - t.length() + 1; i++) {
            if(s.substring(i, i + t.length()).equals(t)) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}