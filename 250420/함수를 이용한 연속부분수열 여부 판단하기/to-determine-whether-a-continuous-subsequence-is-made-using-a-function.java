import java.util.Scanner;

public class Main {

    public static void isbubun(int arr1[], int arr2[]) {
        int a = arr1.length;
        int b = arr2.length;

        for (int i = 0; i <= a - b; i++) {
            boolean isBubun = true;
            for (int j = 0; j < b; j++) {
                if (arr1[i + j] != arr2[j]) {
                    isBubun = false;
                    break;
                }
            }
            if (isBubun) {
                System.out.println("Yes");
                return;
            }
        }
        System.out.println("No");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int arr1[] = new int[a]; 
        int arr2[] = new int[b]; 

        for (int i = 0; i < a; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < b; i++) {
            arr2[i] = sc.nextInt();
        }
        isbubun(arr1, arr2);
        sc.close();
    }
}
