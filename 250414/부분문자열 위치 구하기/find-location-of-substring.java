import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String t = sc.next();
        int answer = 0;
        boolean flag = false;
        for(int i = 0; i < s.length() - t.length() + 1; i++) {
            if(s.substring(i, i + t.length()).equals(t)) {
                flag = true;
                answer = i;
                break;
            }
        }
        if(!flag) {
            System.out.println(-1);
        }
        else {
            System.out.println(answer);
        }
        sc.close();
    }
}