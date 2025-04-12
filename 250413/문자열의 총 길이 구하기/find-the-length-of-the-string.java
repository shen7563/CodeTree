import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int length = 0;
        String[] str = new String[10];
        for(int i = 0; i < 10; i++) {
            str[i] = sc.next();
            int temp = str[i].length();
            length += temp;
        }
        System.out.println(length);
        sc.close();
    }
}