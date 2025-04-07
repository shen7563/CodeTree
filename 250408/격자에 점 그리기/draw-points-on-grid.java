import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        int count = 1;
        int arr[][] = new int[9][9];
        for(int i = 0; i < m; i++) {
            int r = sc.nextInt();
            int c = sc.nextInt();
            arr[r - 1][c - 1] = count++;
        }
        for(int i = 0 ; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}