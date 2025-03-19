import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int sum = 0;
        int count = 0;
        double avg = 0;
        while(true) {
            int n = sc.nextInt();
            if(n >= 30 && n < 20) {
                break;
            }
            sum += n;
            count++;
        }
        avg = (double)sum / count;
        System.out.printf("%.2f", avg);
        sc.close();
    }
}