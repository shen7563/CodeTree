import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 26;
        while(n >= 10) {
            System.out.print(n + " ");
            n--;
        }
    }
}