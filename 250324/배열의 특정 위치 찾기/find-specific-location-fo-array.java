import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[10];
        int sum_2 = 0;
        int sum_mul_3 = 0;
        double avg_mul_3 = 0;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if(i % 2 == 1) {
                sum_2 += arr[i];
            }
            if((i + 1) % 3 == 0) {
                sum_mul_3 += arr[i];
            }
        }
        avg_mul_3 = sum_mul_3 / 3.0;
        System.out.printf("%d %.1f", sum_2, avg_mul_3);
        sc.close();
    }
}