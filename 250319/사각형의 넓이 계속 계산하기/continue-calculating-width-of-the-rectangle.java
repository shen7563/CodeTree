import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while(true) {
            int garo = sc.nextInt();
            int sero = sc.nextInt();
            String c = sc.next();

            int area = garo * sero;
            System.out.println(area);
            if(c.charAt(0) == 'C') {
                break;
            }
        }
        sc.close();
    }
}