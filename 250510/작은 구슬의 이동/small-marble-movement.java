import java.util.Scanner;

public class Main {

    public static int[] dx = { 0, 1, -1, 0 };
    public static int[] dy = { 1, 0, 0, -1 };
    public static final int MAX_N = 50;
    public static int n, t, x, y;
    public static String d;

    public static int direction(String s) {
        if (s.equals("R")) {
            return 0;
        } else if (s.equals("D")) {
            return 1;
        } else if (s.equals("U")) {
            return 2;
        } else if (s.equals("L")) {
            return 3;
        }
        return -1;
    }

    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        t = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        d = sc.next();
        int dir = direction(d);
        x--;
        y--;
        for(int i = 0; i < t; i++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (inRange(nx, ny)) {
                x = nx;
                y = ny;
            } else {
                dir = 3 - dir;
            }
        }
        System.out.println((x + 1) + " " + (y + 1));
        sc.close();
    }
}