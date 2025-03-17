import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 10;
        while(n <= 26) {
            System.out.print(n + " ");
            n += 2;
        }
    }
}