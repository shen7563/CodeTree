import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String s[] = new String[10];
        String answer = "";
        for(int i = 0; i < n; i++) {
            s[i] = sc.next();
            answer += s[i];
        }
        for(int i = 0; i < answer.length(); i++) {
            System.out.print(answer.charAt(i));
            if((i + 1) % 5 == 0) {
                System.out.println();
            }
        }
        sc.close();
    }
}