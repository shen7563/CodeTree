import java.util.Scanner;

public class Main {

    public static final int MAX_N = 2001;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int offset = 1000;
        boolean[][] area = new boolean[MAX_N][MAX_N];
        int ax1 = sc.nextInt() + offset;
        int ay1 = sc.nextInt() + offset;
        int ax2 = sc.nextInt() + offset;
        int ay2 = sc.nextInt() + offset;
        int bx1 = sc.nextInt() + offset;
        int by1 = sc.nextInt() + offset;
        int bx2 = sc.nextInt() + offset;
        int by2 = sc.nextInt() + offset;
        int mx1 = sc.nextInt() + offset;
        int my1 = sc.nextInt() + offset;
        int mx2 = sc.nextInt() + offset;
        int my2 = sc.nextInt() + offset;
        for(int i = ax1; i < ax2; i++) {
            for (int j = ay1; j < ay2; j++) {
                area[i][j] = true;
            }
        }
        for(int i = bx1; i < bx2; i++) {
            for (int j = by1; j < by2; j++) {
                area[i][j] = true;
            }
        }
        for(int i = mx1; i < mx2; i++) {
            for (int j = my1; j < my2; j++) {
                area[i][j] = false;
            }
        }
        int uncoveredArea = 0;
        for(int i = 0; i < MAX_N; i++) {
            for (int j = 0; j < MAX_N; j++) {
                if (area[i][j]) {
                    uncoveredArea++;
                }
            }
        }
        System.out.println(uncoveredArea);
        sc.close();
    }
}
