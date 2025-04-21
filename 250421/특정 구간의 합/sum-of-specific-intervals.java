import java.util.Scanner;

public class Main {

    public static int N, M;
    public static int A[] = new int[100];
    public static int a1, a2;

    public static int sumArray() {
        int sum = 0;
        for(int i = a1 - 1; i < a2; i++) {
            sum += A[i];
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        for(int i = 0; i < M; i++) {
            a1 = sc.nextInt();
            a2 = sc.nextInt();
            System.out.println(sumArray());
        }
        sc.close();
    }
}
