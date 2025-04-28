import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[201];
        int offset = 100;
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt() + offset;
            int y = sc.nextInt() + offset;
            for(int j = x; j < y; j++) {
                arr[j]++;
            }
        }
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println(max);
        sc.close();
    }
}