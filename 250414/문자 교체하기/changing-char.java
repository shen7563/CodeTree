import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();
        char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();

        arr2[0] = arr1[0];
        arr2[1] = arr1[1];
        s2 = String.valueOf(arr2);

        System.out.println(s2);
        sc.close();
    }
}