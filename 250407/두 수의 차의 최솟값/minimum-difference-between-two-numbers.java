import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[10];
        int min_minus = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for(int i = 0; i < n - 1; i++) {
            int minus = arr[i + 1] - arr[i];
            if(minus < min_minus) {
                min_minus = minus;
            }
        }
        System.out.println(min_minus);
        sc.close();
    }
}