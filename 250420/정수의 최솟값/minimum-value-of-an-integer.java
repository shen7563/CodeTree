import java.util.Scanner;

public class Main {

    public static int function(int x, int y, int z) {
        int min = Math.min(x, Math.min(y, z));
        return min;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        System.out.println(function(a, b, c));
        sc.close();
    }
}