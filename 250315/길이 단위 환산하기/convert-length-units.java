import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double ft_to_cm = 30.48;

        double ft = sc.nextDouble();

        System.out.printf("%.1f",ft * ft_to_cm);
    }
}