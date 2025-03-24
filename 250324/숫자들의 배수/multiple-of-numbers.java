import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[100];
        int count = 0;
        for(int i = 0; i < 100; i++) {
            arr[i] += n * (i + 1);
            System.out.print(arr[i] + " ");
            if(arr[i] % 5 == 0) {
                count++;
            }
            if(count >= 2) {
                break;
            }
        }
        sc.close();
    }
}