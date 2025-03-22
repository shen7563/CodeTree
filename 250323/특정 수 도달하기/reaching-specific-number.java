import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[10];
        int sum = 0;
        double avg = 0;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }
        for(int i = 0; i < 10; i++) {
            if(arr[i] >= 250 || i == 9) {
                avg = (double)sum / i;
                break;
            }
            else {
                sum += arr[i];
            }
        }
        System.out.printf("%d %.1f", sum, avg);
        sc.close();
    }
}