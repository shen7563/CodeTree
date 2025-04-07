import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[][] = new int[2][4];
        double row_sum = 0;
        double col_sum = 0;
        double sum = 0;
        double row_avg = 0;
        double col_avg = 0;
        double avg = 0;

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 4; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 4; j++) {
                row_sum += arr[i][j];
            }
            row_avg = row_sum / 4;
            System.out.printf("%.1f ", row_avg);
            row_sum = 0;
        }
        System.out.println();
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 2; j++) {
                col_sum += arr[j][i];
            }
            col_avg = col_sum / 2;
            System.out.printf("%.1f ", col_avg);
            col_sum = 0;
        }
        System.out.println();
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 4; j++) {
                sum += arr[i][j];
            }
        }
        avg = sum / 8;
        System.out.printf("%.1f", avg);
        sc.close();
    }
}