import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[1000];
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] < minPrice) {
                minPrice = arr[i];
            }
            int profit = arr[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        System.out.println(maxProfit);
        sc.close();
    }
}