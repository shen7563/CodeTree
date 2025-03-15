import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int temperture = sc.nextInt();

        if (temperture >= 100) {
            System.out.println("ice");
        }
        else if (temperture >= 0) {
            System.out.println("water");
        }
        else {
            System.out.println("ice");
        }
    }
}