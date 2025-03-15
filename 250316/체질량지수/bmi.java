import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int height = sc.nextInt();
        int weight = sc.nextInt();

        int bmi = (10000 * weight) / (height * height);
        
        System.out.println(bmi);
        if(bmi >= 25) {
            System.out.println("Obesity");
        }
    }
}