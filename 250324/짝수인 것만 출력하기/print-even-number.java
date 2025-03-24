import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 0;
        int arr[] = new int[100];
        int arr2[] = new int[100];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] % 2 == 0) {
                arr2[count] = arr[i];
                count++;
            }
        }
        for(int i = 0; i < count; i++) {
            System.out.print(arr2[i] + " ");
        }
        sc.close();
    }
}