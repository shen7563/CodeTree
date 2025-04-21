import java.util.Scanner;

public class Main {

    public static int gcdTwoNumbers(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcdTwoNumbers(b, a % b);
    }

    public static int lcm(int a, int b) {
        return (a * b) / gcdTwoNumbers(a, b);
    }

    public static int lcmRecursive(int[] arr, int n) {
        if (n == 1) {
            return arr[0];
        }
        return lcm(arr[n - 1], lcmRecursive(arr, n - 1));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(lcmRecursive(arr, n));
        sc.close();
    }
}