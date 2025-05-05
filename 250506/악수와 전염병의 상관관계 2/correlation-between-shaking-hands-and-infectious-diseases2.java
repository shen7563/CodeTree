import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int MAX_N = 101;
        int developers[] = new int[MAX_N];
        int[] remain = new int[MAX_N];

        int N = sc.nextInt();
        int K = sc.nextInt();
        int P = sc.nextInt();
        int T = sc.nextInt();

        developers[P] = 1;
        remain[P] = K;

        int[][] shakes = new int[T][3];
        for (int i = 0; i < T; i++) {
            shakes[i][0] = sc.nextInt();
            shakes[i][1] = sc.nextInt();
            shakes[i][2] = sc.nextInt();
        }
        Arrays.sort(shakes, (a, b) -> Integer.compare(a[0], b[0]));

        for (int i = 0; i < T; i++) {
            if (developers[shakes[i][1] ] == 1 && remain[shakes[i][1]] > 0) {
                developers[shakes[i][2]] = 1;
                remain[shakes[i][2]] = K;
                remain[shakes[i][1]]--;
            }
        }
        for (int i = 1; i <= N; i++) {
            System.out.print(developers[i]);
        }
        sc.close();
    }
}