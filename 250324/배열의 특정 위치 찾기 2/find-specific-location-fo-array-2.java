import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[10];
        int sum_even = 0, sum_odd = 0;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if(i % 2 == 0) {
                sum_odd += arr[i];
            } else {
                sum_even += arr[i];
            }
        }
        if(sum_odd >= sum_even) {
            System.out.println(sum_odd - sum_even);
        }
        else {
            System.out.println(sum_even - sum_odd);
        }
        sc.close();
    }
}