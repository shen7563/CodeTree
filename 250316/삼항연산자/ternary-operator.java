import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int score = sc.nextInt();
        String grade = score == 100 ? "pass" : "failure";

        System.out.println(grade);
    }
}