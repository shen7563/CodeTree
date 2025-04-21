import java.util.Scanner;

public class Main {

    public static int N, M;
    public static int[] A = new int[100];

    public static int arraySum() {
        int sum = 0;
        while (true) {
            sum += A[M - 1];
            if (M == 1) {
                return sum;
            }
            if (M % 2 == 0) {
                M /= 2;
            } else {
                M -= 1;
            }
        }
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        System.out.println(arraySum());
        sc.close();
    }
}
