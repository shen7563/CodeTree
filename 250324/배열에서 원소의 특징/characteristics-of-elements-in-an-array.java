import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[10];
        int temp = 2;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if(arr[i] % 3 == 0) {
                temp = i - 1;
                break;
            }
        }
        System.out.println(arr[temp]);
        sc.close();
    }
}