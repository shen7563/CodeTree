import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int arr1[] = new int[100];
        int arr2[] = new int[100];
        for(int i = 0; i < n1; i++) {
            arr1[i] = sc.nextInt();
        }
        for(int i = 0; i < n2; i++) {
            arr2[i] = sc.nextInt();
        }
        int cnt = 0;
        for(int i = 0; i < n1; i++) {
            if(arr1[i] == arr2[cnt]) {
                cnt++;
            }
            else {
                cnt = 0;
            }
            if(cnt == n2) {
                System.out.println("Yes");
                break;
            }
        }
        if(cnt != n2) {
            System.out.println("No");
        }
        sc.close();
    }
}