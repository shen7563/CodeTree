import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[1000];
        int max = Integer.MIN_VALUE;
        boolean flag = false;
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(max == arr[i]) {
                flag = true;
            }
            if(arr[i] > max) {
                max = arr[i];
                flag = false;
            }
        }
        if(flag) {
            System.out.println(-1);
        }
        else {
            System.out.println(max);
        }
        sc.close();
    }
}