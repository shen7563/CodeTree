import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[][] = new int[15][15];
        arr[0][0] = 1;
        arr[1][0] = 1;
        arr[1][1] = 1;
        for (int i = 2; i < 15; i++) {
            arr[i][0] = 1;
            for (int j = 1; j <= i; j++) {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] == 0) {
                    continue;
                }
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}