import java.util.Scanner;

public class Main {

    public static final int MAX_N = 100;
    public static int[] dx = {0, 1, 0 , -1};
    public static int[] dy = {1, 0, -1, 0};
    public static int[][] map = new int[MAX_N][MAX_N];
    public static int n;
    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                map[i][j] = sc.nextInt();
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int adjacent = 0;
                for(int dir = 0; dir < 4; dir++) {
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];
                    if(inRange(nx, ny) && map[nx][ny] == 1) {
                        adjacent++;
                    }
                }
                if(adjacent >= 3) {
                    count++;
                }
            }
        }
        System.out.println(count);
        sc.close();
    }
}