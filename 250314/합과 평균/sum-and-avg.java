import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int total = a + b;
        double avg = total / 2.0;

        System.out.printf((a + b) + " " + "%.1f", avg);
    }
}