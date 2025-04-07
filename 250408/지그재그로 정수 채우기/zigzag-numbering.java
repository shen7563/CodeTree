import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int count = 0;
        int arr[][] = new int[10][10];
        for(int i = 0; i < m; i++) {
            if(i % 2 == 1) {
                for(int j = n - 1; j >= 0; j--) {
                    arr[j][i] = count;
                    count++;
                }
            }
            else {
                for(int j = 0; j < n; j++) {
                    arr[j][i] = count;
                    count++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}