import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String[] arr = s.split("\\.");

        System.out.printf("%s-%s-%s", arr[1], arr[2], arr[0]);
    }
}