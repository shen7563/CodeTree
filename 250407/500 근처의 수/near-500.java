import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[10];

        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }
        int max = Integer.MIN_VALUE;
        int standard = 500;
        int min = Integer.MAX_VALUE;
        for(int i = 0 ; i < 10; i++) {
            if(arr[i] > max && arr[i] < standard) {
                max = arr[i];
            }
            if(arr[i] < min && arr[i] > standard) {
                min = arr[i];
            }

        }
        System.out.printf("%d %d", max, min);
        sc.close();
    }
}