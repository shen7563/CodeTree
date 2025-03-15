import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double real_number = sc.nextDouble();

        if(real_number >= 1.0) {
            System.out.println("High");
        }
        else if(real_number >= 0.5) {
            System.out.println("Middle");
        }
        else {
            System.out.println("Low");
        }
    }
}