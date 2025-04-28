import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int b = sc.nextInt();
        String result = "";
        if(b == 4) {
            result = Integer.toString(n, 4);
        }
        else if (b == 8) {
            result = Integer.toString(n, 8);
        }
        System.out.println(result);
        sc.close();
    }
}