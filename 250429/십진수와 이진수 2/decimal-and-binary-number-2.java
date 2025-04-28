import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String binary = sc.nextLine();
        int demical = Integer.parseInt(binary, 2);
        demical *= 17;
        String result = Integer.toBinaryString(demical);
        System.out.println(result);
        sc.close();
    }
}