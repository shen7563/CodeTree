import java.util.Scanner;

public class Main {

    public static int[] dx = {0, 1, 0 , -1};
    public static int[] dy = {1, 0, -1, 0};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, y = 0;
        int dir = 0;
        String s = sc.next();

        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == 'L') {
                dir = (dir - 1 + 4) % 4;
            }
            else if(s.charAt(i) == 'R') {
                dir = (dir + 1) % 4;
            }
            else if(s.charAt(i) == 'F') {
                x += dx[dir];
                y += dy[dir];
            }
        }
        System.out.println(x + " " + y);
        sc.close();
    }
}