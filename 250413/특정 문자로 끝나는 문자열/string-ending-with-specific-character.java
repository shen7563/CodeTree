import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] str = new String[10];
        boolean flag = false;
        for(int i = 0; i < 10; i++) {
            str[i] = sc.next();
        }
        String s = sc.next();
        for(int i = 0; i < 10; i++) {
            if(str[i].charAt(str[i].length() - 1) == s.charAt(0)) {
                System.out.println(str[i]);
                flag = true;
            } 
        }
        if(!flag) {
            System.out.println("None");
        }
        sc.close();
    }
}