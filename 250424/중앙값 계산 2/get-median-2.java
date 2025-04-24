import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int index = 1;
        while(index <= n) {
            int[] copyarr = Arrays.copyOf(arr, n);
            Arrays.sort(copyarr, 0, index);
            System.out.print(copyarr[index / 2] + " ");
            index += 2;
        }
        sc.close();
    }
}