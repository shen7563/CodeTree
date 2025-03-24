import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int q = sc.nextInt();
        int[] arr = new int[100];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for(int i = 0; i < q; i++) {
            int x = sc.nextInt();
            if(x == 1) {
                int a = sc.nextInt();
                System.out.println(arr[a - 1]);
            }
            else if(x == 2) {
                int b = sc.nextInt();
                int count = 0;
                for(int j = 0; j < n; j++) {
                    if(arr[j] == b) {
                        System.out.println(j + 1);
                        break;
                    }
                    else {
                        count++;
                    }
                }
                if(count == n) {
                    System.out.println(0);
                }
            }
            else if(x == 3) {
                int s = sc.nextInt();
                int e = sc.nextInt();
                for(int j = s - 1; j < e; j++) {
                    System.out.print(arr[j] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}