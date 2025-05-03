import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        boolean[][] area = new boolean[201][201];

        int offset = 100;
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();
            for(int x = x1 + offset; x < x2 + offset; x++) {
                for(int y = y1 + offset; y < y2 + offset; y++) {
                    area[x][y] = true;
                }
            }   
        }
        int count = 0;
        for(int x = 0; x < area.length; x++) {
            for(int y = 0; y < area[x].length; y++) {
                if(area[x][y]) {
                    count++;
                }
            }
        }
        System.out.println(count);
        sc.close();
    }
}
