import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[2 * n];
        int[] arr1 = new int[2 * n];
        int[] answer = new int[2 * n];
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < 2 * n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i = 0; i < 2 * n; i++) {
            arr1[i] = arr[i];
        }
        Integer[] arr2 = Arrays.stream(arr).boxed().toArray(Integer[]::new);
        Arrays.sort(arr2, Collections.reverseOrder());
        for(int i = 0; i < 2 * n; i++) {
            answer[i] = arr1[i] + arr2[i];
            if(answer[i] > max) {
                max = answer[i];
            }
        }
        System.out.println(max);
        sc.close();
    }
}