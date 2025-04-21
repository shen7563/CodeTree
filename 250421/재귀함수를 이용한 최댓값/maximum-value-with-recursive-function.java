import java.util.Scanner;

public class Main {

    public static int max(int[] arr, int n) {
        if(n == 1) {
            return arr[0];
        }
        else {
            if(arr[n - 1] > max(arr, n - 1)) {
                return arr[n - 1];
            } else {
                return max(arr, n - 1);
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[100];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(max(arr, n));
        sc.close();
    }
}
