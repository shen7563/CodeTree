import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int mid_score = sc.nextInt();
        int final_score = sc.nextInt();

        if(mid_score >= 90 && final_score >= 95) {
            System.out.println(100000);
        }
        else if(mid_score>= 90 && final_score >= 90) {
            System.out.println(50000);
        }
        else {
            System.out.println(0);
        }
    }
}