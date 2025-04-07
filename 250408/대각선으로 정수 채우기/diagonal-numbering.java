import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int count = 1;
        int arr[][] = new int[100][100];

        for(int i = 0; i < n + m - 1; i++) {
            for(int j = 0; j < n; j++) {
                if(i - j >= 0 && i - j < m) {
                    arr[j][i - j] = count++;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}