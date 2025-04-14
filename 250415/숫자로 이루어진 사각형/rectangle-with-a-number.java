import java.util.Scanner;

public class Main {

    public static void function(int n) {
        int count = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print(count + " ");
                count++;
                if(count > 9) {
                    count = 1;
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        function(n);
        sc.close();
    }
}
