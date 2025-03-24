import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char[] word = new char[]{'L', 'E', 'B', 'R', 'O', 'S'};
        char letter = sc.next().charAt(0);
        int count = 0;
        for(int i = 0; i < 6; i++) {
            if(word[i] == letter) {
                System.out.print(i);
                break;
            }
            count++;
        }
        if(count == 6) {
            System.out.print("None");
        }
        sc.close();
    }
}