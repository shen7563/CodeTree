import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int arr1[][] = new int[10][10];
        int arr2[][] = new int[10][10];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr2[i][j] = sc.nextInt();
            }
        }
        int answer[][] = new int[10][10];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr1[i][j] == arr2[i][j]) {
                    answer[i][j] = 0;
                } else {
                    answer[i][j] = 1;
                }
                System.out.print(answer[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}