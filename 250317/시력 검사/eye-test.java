import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double left_eye = sc.nextDouble();
        double right_eye = sc.nextDouble();

        if (left_eye >= 1.0 && right_eye >= 1.0) {
            System.out.println("High");
        } else if (left_eye >= 0.5 && right_eye >= 0.5) {
            System.out.println("Middle");
        } else {
            System.out.println("Low");
        }
    }
}