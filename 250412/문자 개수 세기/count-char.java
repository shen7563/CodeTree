import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        String find = sc.next();
        int count = 0;
        for(int i = 0; i < str.length(); i++) {
            if(str.charAt(i) == find.charAt(0)) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}