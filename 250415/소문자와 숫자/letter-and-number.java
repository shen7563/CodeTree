import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        for(int i = 0; i < s.length(); i++) {
            //영문자와 숫자만 출력, 단 영문자는 소문자로 바꿔서 출력
            if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {
                System.out.print((char)(s.charAt(i) + 32));
            } else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                System.out.print(s.charAt(i));
            } else if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                System.out.print(s.charAt(i));
            }
        }
        sc.close();
    }
}