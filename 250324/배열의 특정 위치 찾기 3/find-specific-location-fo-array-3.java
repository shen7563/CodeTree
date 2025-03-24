import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[100];
        int count = 0;
        int sum = 0;
        for(int i = 0; i < 100; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] == 0) {
                break;
            }
            count++;
        }
        for(int i = count - 1; i >= count - 3; i--) {
            sum += arr[i];
        }
        System.out.println(sum);
        sc.close();
    }
}