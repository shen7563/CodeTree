import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = a + b;
        int count = 0;
        String s = Integer.toString(sum);
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == '1'){
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}