import java.util.Scanner;

public class Main {

    public static final int MAX_N = 1000;
    public static int[] arr = new int[MAX_N];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int count = 1;
        int max = Integer.MIN_VALUE;
        for(int i = 1; i < n; i++) {
            if(arr[i] > 0 && arr[i - 1] > 0) {
                count++;
            } else if(arr[i] > 0 && arr[i - 1] <= 0) {
                max = Math.max(max, count);
                count = 1;
            } else if(arr[i] <= 0 && arr[i - 1] > 0) {
                max = Math.max(max, count);
                count = 1;
            } else if(arr[i] <= 0 && arr[i - 1] <= 0) {
                count++;
            }
        }
        max = Math.max(max, count);
        System.out.println(max);
        sc.close();
    }
}
