import java.util.Scanner;

public class Main {

    public static int max(int[] arr, int n) {
        if (n == 1) {
            return arr[0];
        } else {
            int prevMax = max(arr, n - 1);
            if(arr[n - 1] > prevMax) {
                return arr[n - 1];
            } else {
                return prevMax;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(max(arr, n));
        sc.close();
    }
}
