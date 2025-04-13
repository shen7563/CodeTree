import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int eeCount = 0;
        int ebCount = 0;
        for(int i = 0; i < s.length() - 1; i++) {
            if(s.substring(i, i + 2).equals("ee")) {
                eeCount++;
            } else if(s.substring(i, i + 2).equals("eb")) {
                ebCount++;
            }
        }
        System.out.println(eeCount + " " + ebCount);
        sc.close();
    }
}