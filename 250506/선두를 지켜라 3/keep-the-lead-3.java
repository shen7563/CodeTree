import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int MAX_N = 1000001;
        int[] a_pos = new int[MAX_N];
        int[] b_pos = new int[MAX_N];
        String first = "";
        int n = sc.nextInt();
        int m = sc.nextInt();

        int aTime = 1;
        int bTime = 1;
        for(int i = 0; i < n; i++) {
            int a_vel = sc.nextInt();
            int a_time = sc.nextInt();
            for(int j = 0; j < a_time; j++) {
                a_pos[aTime] = a_pos[aTime - 1] + a_vel;
                aTime++;
            }
        }
        for(int i = 0; i < m; i++) {
            int b_vel = sc.nextInt();
            int b_time = sc.nextInt();
            for(int j = 0; j < b_time; j++) {
                b_pos[bTime] = b_pos[bTime - 1] + b_vel;
                bTime++;
            }
        }

        int podium = 0;
        for(int i = 1; i < aTime; i++) {
            if(a_pos[i] > b_pos[i]) {
                if(first.equals("A")) {
                    continue;
                }
                first = "A";
                podium++;
            }
            else if (a_pos[i] == b_pos[i]) {
                if(first.equals("AB")) {
                    continue;
                }
                first = "AB";
                podium++;
            }
            else {
                if(first.equals("B")) {
                    continue;
                }
                first = "B";
                podium++;
            }
        }
        System.out.println(podium);
        sc.close();
    }
}