import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();
        String str2 = sc.next();
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for(int i = 0; i < arr1.length; i++) {
            if(arr1.length != arr2.length) {
                System.out.println("No");
                return;
            }
            if(arr1[i] != arr2[i]) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
        sc.close();
    }
}