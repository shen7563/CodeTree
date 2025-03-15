import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String[] arr = s.split(":");

        System.out.printf("%d:%s", Integer.parseInt(arr[0]) + 1, arr[1]);
    }
}