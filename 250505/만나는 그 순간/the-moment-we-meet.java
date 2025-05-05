import java.util.Scanner;

public class Main {

    public static final int MAX_N = 1000001;
    public static int[] aMoves = new int[MAX_N];
    public static int[] bMoves = new int[MAX_N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int a_idx = 1;
        int b_idx = 1;
        int a_moves = 0;
        int b_moves = 0;
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int a = sc.nextInt();
            if (s.equals("R")) {
                for (int j = 0; j < a; j++) {
                    a_moves++;
                    aMoves[a_idx++] = a_moves;
                }
            } else {
                for (int j = 0; j < a; j++) {
                    a_moves--;
                    aMoves[a_idx++] = a_moves;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            String s = sc.next();
            int b = sc.nextInt();
            if (s.equals("R")) {
                for (int j = 0; j < b; j++) {
                    b_moves++;
                    bMoves[b_idx++] = b_moves;
                }
            } else {
                for (int j = 0; j < b; j++) {
                    b_moves--;
                    bMoves[b_idx++] = b_moves;
                }
            }
        }
        int max_idx = Math.max(a_idx, b_idx);
        boolean isMeet = false;
        int meets = 0;
        for (int i = 1; i < max_idx; i++) {
            if (aMoves[i] == bMoves[i]) {
                isMeet = true;
                meets = i;
                break;
            }
        }
        if (isMeet) {
            System.out.println(meets);
        } else {
            System.out.println(-1);
        }
        sc.close();
    }
}