import java.util.Scanner;

public class Main {

    public static void print10Start() {
        for(int i = 0; i < 10; i++) {
            System.out.print("*");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 5; i++) {
            print10Start();
        }
        sc.close();
    }
}
