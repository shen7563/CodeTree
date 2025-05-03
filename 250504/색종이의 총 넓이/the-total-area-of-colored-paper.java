import java.util.Scanner;

public class Main {

    public static final int MAX_N = 201;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        boolean[][] area = new boolean[MAX_N][MAX_N];
        int offset = 100;
        int n = sc.nextInt();

        for(int i = 0; i < n; i++) {
            int x = sc.nextInt() + offset;
            int y = sc.nextInt() + offset;
            for(int j = x; j < x + 8; j++) {
                for(int k = y; k < y + 8; k++) {
                    area[j][k] = true;
                }
            }
        }
        int count = 0;
        for(int i = 0; i < MAX_N; i++) {
            for(int j = 0; j < MAX_N; j++) {
                if(area[i][j]) {
                    count++;
                }
            }
        }
        System.out.println(count);
        sc.close();
    }
}
