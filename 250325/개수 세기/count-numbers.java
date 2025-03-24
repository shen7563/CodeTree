import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int count = 0;
        int[] arr = new int[100];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] == m) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}