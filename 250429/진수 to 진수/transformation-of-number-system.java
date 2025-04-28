import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int n = sc.nextInt();
        String b = sc.next();

        int num = Integer.parseInt(b, a);
        
        String result = Integer.toString(num, n);
        System.out.println(result);
        sc.close();
    }
}