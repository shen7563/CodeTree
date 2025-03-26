import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[100];
        int max_first = Integer.MIN_VALUE;
        int max_second = Integer.MIN_VALUE;
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] > max_first) {
                max_second = max_first;
                max_first = arr[i];
            } else if(arr[i] > max_second) {
                max_second = arr[i];
            }
        }
        System.out.printf("%d %d", max_first, max_second);
        sc.close();
    }
}