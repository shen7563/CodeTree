import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[100];
        int scoreArr[] = new int[11];
        for(int i = 0; i < 100; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] == 0) {
                break;
            }
            scoreArr[arr[i] / 10]++;
        }
        for(int i = 10; i >= 1; i--) {
            System.out.printf("%d - %d\n", i * 10, scoreArr[i]);
        }
        sc.close();
    }
}