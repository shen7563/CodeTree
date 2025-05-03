import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] draw = new int[200001];
        int[] black = new int[200001];
        int[] white = new int[200001];
        int blackCount = 0, whiteCount = 0;
        int current = 100000;
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt();
            String s = sc.next();
            if(s.equals("L")) {
                while(x-- > 0) {
                    draw[current] = 1;
                    white[current]++;
                    if(x > 0) {
                        current--;
                    }
                }
            }
            else {
                while(x-- > 0) {
                    draw[current] = 2;
                    black[current]++;
                    if(x > 0) {
                        current++;
                    }
                }
            }
        }
        for(int i = 0; i <= 200000; i++) {
            if(draw[i] == 1) {
                whiteCount++;
            }
            else if(draw[i] == 2) {
                blackCount++;
            }
        }
        System.out.println(whiteCount + " " + blackCount);
        sc.close();
    }
}
