import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String f_sym = sc.next();
        int f_tem = sc.nextInt();
        String s_sym = sc.next();
        int s_tem = sc.nextInt();
        String t_sym = sc.next();
        int t_tem = sc.nextInt();

        int count = 0;

        if(f_sym.charAt(0) == 'Y') {
            if(f_tem >= 37) {
                count++;
            }
        }
        if(s_sym.charAt(0) == 'Y') {
            if(s_tem >= 37) {
                count++;
            }
        }
        if(t_sym.charAt(0) == 'Y') {
            if(t_tem >= 37) {
                count++;
            }
        }

        if(count >= 2) {
            System.out.println("E");
        }
        else {
            System.out.println("N");
        }

    }
}