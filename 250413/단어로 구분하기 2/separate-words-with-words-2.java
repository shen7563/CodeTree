import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] str = new String[10];
        for(int i = 0; i < 10; i++) {
            str[i] = sc.next();
            if((i + 1) % 2 == 1) {
                System.out.println(str[i]);
            }
        }
        sc.close();
    }
}