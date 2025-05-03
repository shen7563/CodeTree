import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] draw = new int[100];
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            for(int j = x; j <= y; j++) {
                draw[j]++;
            }
        }
        for(int i = 0; i < draw.length; i++) {
            if(draw[i] > max) {
                max = draw[i];
            }
        }
        System.out.println(max);
        sc.close();
    }
}