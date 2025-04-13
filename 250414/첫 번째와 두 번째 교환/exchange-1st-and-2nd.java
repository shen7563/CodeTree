import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        char[] arr = s.toCharArray();
        
        char s1 = arr[0];
        char s2 = arr[1];
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == s1) {
                arr[i] = s2;
            } else if(arr[i] == s2) {
                arr[i] = s1;
            }
        }
        s = String.valueOf(arr);
        System.out.println(s);
        sc.close();
    }
}