import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        String[] str = new String[10];
        int total_length = 0;
        int count = 0;
        for(int i = 0; i < num; i++) {
            str[i] = sc.next();
            if(str[i].charAt(0) == 'a') {
                count++;
            }
            int temp = str[i].length();
            total_length += temp;
        }
        System.out.printf("%d %d", total_length, count);
        sc.close();
    }
}