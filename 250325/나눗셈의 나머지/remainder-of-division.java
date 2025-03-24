import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = 0;
        int namuji[] = new int[11];
        while (a >= 2) {
            namuji[a % b]++;
            a = a / b;
        }
        for (int i = 0; i < 11; i++) {
            {
                sum += namuji[i] * namuji[i];
            }
        }
        System.out.println(sum);
        sc.close();
    }
}