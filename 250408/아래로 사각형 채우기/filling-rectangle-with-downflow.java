import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 1;
        int arr[][] = new int[10][10];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                arr[j][i] = count++;
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}