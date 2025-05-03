import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] draw = new int[201];
        int answer = 0;
        int index = 100;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            String s = sc.next();
            if (s.equals("R")) {
                while (x != 0) {
                    draw[index]++;
                    index++;
                    x--;
                }
            } else if (s.equals("L")) {
                while (x != 0) {
                    draw[index]++;
                    index--;
                    x--;
                }
            }
        }
        for (int i = 0; i < draw.length; i++) {
            if (draw[i] >= 2) {
                answer++;
            }
        }
        System.out.println(answer);
        sc.close();
    }
}