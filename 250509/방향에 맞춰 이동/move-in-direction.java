import java.util.Scanner;

public class Main {

    public static int[] dx = {0, 1, 0, -1};
    public static int[] dy = {1, 0, -1, 0};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            String s = sc.next();
            int m = sc.nextInt();
            if(s.equals("N")) {
                for(int j = 0; j < m; j++) {
                    x += dx[0];
                    y += dy[0];
                }
            }
            else if(s.equals("E")) {
                for(int j = 0; j < m; j++) {
                    x += dx[1];
                    y += dy[1];
                }
            }
            else if(s.equals("S")) {
                for(int j = 0; j < m; j++) {
                    x += dx[2];
                    y += dy[2];
                }
            }
            else if(s.equals("W")) {
                for(int j = 0; j < m; j++) {
                    x += dx[3];
                    y += dy[3];
                }
            }
        }
        System.out.println(x + " " + y);
        sc.close();
    }
}