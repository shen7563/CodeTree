import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] str = new String[] { "apple", "banana", "grape", "blueberry", "orange" };
        String s = sc.next();
        int count = 0;
        for(int i = 0; i < 5; i++) {
            if(s.charAt(0)== str[i].charAt(2) || s.charAt(0) == str[i].charAt(3)) {
                System.out.println(str[i]);
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}