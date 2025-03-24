import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int student = sc.nextInt();
        int[] scores = new int[4];
        int sum = 0;
        double avg = 0;
        int count = 0;
        for(int i = 0; i < student; i++) {
            sum = 0;
            avg = 0;
            for(int j = 0; j < 4; j++) {
                scores[j] = sc.nextInt();
                sum += scores[j];
            }
            avg = sum / 4.0;
            if(avg >= 60) {
                System.out.println("pass");
                count++;
            }
            else {
                System.out.println("fail");
            }
        }
        System.out.println(count);
        sc.close();
    }
}