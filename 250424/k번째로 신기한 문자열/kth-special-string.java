import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int K = sc.nextInt();
        String T = sc.next();
        String[] str = new String[N];
        String[] ans = new String[N];
        int count = 0;

        for (int i = 0; i < N; i++) {
            str[i] = sc.next();
            if (str[i].startsWith(T)) {
                ans[count] = str[i];
                count++;
            }
        }
        String[] filteredAns = Arrays.copyOf(ans, count);

        Arrays.sort(filteredAns);
        System.out.println(filteredAns[K - 1]);

        sc.close();
    }
}