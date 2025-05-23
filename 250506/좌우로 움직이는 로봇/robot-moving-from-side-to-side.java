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
        int bTime = 1;
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            String a_move = sc.next();
            if (a_move.equals("R")) {
                for (int j = 0; j < a; j++) {
                    aMove[aTime] = aMove[aTime - 1] + 1;
                    aTime++;
                }
            } else {
                for (int j = 0; j < a; j++) {
                    aMove[aTime] = aMove[aTime - 1] - 1;
                    aTime++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            int b = sc.nextInt();
            String b_move = sc.next();
            if (b_move.equals("R")) {
                for (int j = 0; j < b; j++) {
                    bMove[bTime] = bMove[bTime - 1] + 1;
                    bTime++;
                }
            } else {
                for (int j = 0; j < b; j++) {
                    bMove[bTime] = bMove[bTime - 1] - 1;
                    bTime++;
                }
            }
        }
        if(aTime > bTime) {
            for (int i = bTime; i < aTime; i++) {
                bMove[i] = bMove[bTime - 1];
            }
        } else if(bTime > aTime) {
            for (int i = aTime; i < bTime; i++) {
                aMove[i] = aMove[aTime - 1];
            }
        }
        int meetCount = 0;
        for (int i = 1; i < Math.max(aTime, bTime); i++) {
            if(aMove[i] == bMove[i]) {
                if(i == 1 || (aMove[i - 1] == bMove[i - 1])) {
                    continue;
                }
                meetCount++;
            }
        }
        System.out.println(meetCount);
        sc.close();
    }
}