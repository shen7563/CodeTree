import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int min = Integer.MAX_VALUE;
        int n = sc.nextInt();
        int count = 0;
        int arr[] = new int[100];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(min > arr[i]) {
                min = arr[i];
            }
        }
        for(int i = 0; i < n; i++) {
            if(min == arr[i]) {
                count++;
            }
        }
        System.out.printf("%d %d\n", min, count);
        sc.close();
    }
}