import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[100];
        int temp = 0;
        for(int i = 0; i < 100; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] == 0) {
                temp = i;
                break;
            }
        }
        for(int i = 0; i < temp; i++) {
            if(arr[i] % 2 == 0) {
                System.out.print(arr[i] / 2 + " ");
            }
            else {
                System.out.print(arr[i] + 3 + " ");
            }
        }
        sc.close();
    }
}