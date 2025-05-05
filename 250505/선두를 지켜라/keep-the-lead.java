import java.util.Scanner;

public class Main {

    public static final int MAX_N = 1000001;
    public static int[] aMove = new int[MAX_N];
    public static int[] bMove = new int[MAX_N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int aTime = 1;
        for(int i = 0; i < n; i++) {
            int a_v = sc.nextInt();
            int a_t = sc.nextInt();
            for(int j = 0; j < a_t; j++) {
                aMove[aTime] = aMove[aTime - 1] + a_v;
                aTime++;
            }
        }
        int bTime = 1;
        for(int i = 0; i < m; i++) {
            int b_v = sc.nextInt();
            int b_t = sc.nextInt();
            for(int j = 0; j < b_t; j++) {
                bMove[bTime] = bMove[bTime - 1] + b_v;
                bTime++;
            }
        }
        int leader = 0, answer = 0;
        for(int i = 1; i < aTime; i++) {
            if(aMove[i] > bMove[i]) {
                if(leader == 2) {
                    answer++;
                }
                leader = 1;
            }
            else if(aMove[i] < bMove[i]) {
                if(leader == 1) {
                    answer++;
                }
                leader = 2;
            }
        }
        System.out.println(answer);
        sc.close();
    }
}