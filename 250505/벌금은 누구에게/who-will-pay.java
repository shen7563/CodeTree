import java.util.Scanner;

public class Main {

    public static final int MAX_N = 101;
    public static int[] arr = new int[MAX_N];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        int student = 0;
        boolean isPenelty = false;
        for(int i = 0; i < m; i++) {
            int number = sc.nextInt();
            arr[number]++;
            if(arr[number] >= k) {
                isPenelty = true;
                student = number;
                break;
            }
        }
        if(isPenelty) {
            System.out.println(student);
        } else {
            System.out.println(-1);
        }
        sc.close();
    }
}