import java.util.Scanner;

public class Main {

    public static final int MAX_N = 1000000;
    public static int[] aMoves = new int[MAX_N];
    public static int[] bMoves = new int[MAX_N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a_move = 0, b_move = 0;
        int a_idx = 0, b_idx = 0;
        for(int i = 0; i < n; i++) {
            String s = sc.next();
            int a_d = sc.nextInt();
            if(s.equals("R")) {
                for(int j = 0; j < a_d; j++) {
                    aMoves[a_idx++] = a_move;
                    a_move++; 
                }
            }
            else {
                for(int j = 0; j < a_d; j++) {
                    aMoves[a_idx++] = a_move;
                    a_move--;
                }
            }
        }
        for(int i = 0; i < m; i++) {
            String s = sc.next();
            int b_d = sc.nextInt();
            if(s.equals("R")) {
                for(int j = 0; j < b_d; j++) {
                    bMoves[b_idx++] = b_move;
                    b_move++; 
                }
            }
            else {
                for(int j = 0; j < b_d; j++) {
                    bMoves[b_idx++] = b_move;
                    b_move--;
                }
            }
        }
        for(int i = 1; i < MAX_N; i++) {
            if(aMoves[i] == bMoves[i]) {
                System.out.println(i);
                break;
            }
        }
        sc.close();
    }
}
