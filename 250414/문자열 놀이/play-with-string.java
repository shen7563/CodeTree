import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            int q = sc.nextInt();
            if(q == 1) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                char[] arr = s.toCharArray();
                char temp = arr[a - 1];
                arr[a - 1] = arr[b - 1];
                arr[b - 1] = temp;
                s = String.valueOf(arr);
                System.out.println(s);
            }
            else if(q == 2) {
                String x = sc.next();
                String y = sc.next();
                char[] arr = s.toCharArray();
                for(int j = 0; j < s.length(); j++) {
                    if(arr[j] == x.charAt(0)) {
                        arr[j] = y.charAt(0);
                    }
                }
                s = String.valueOf(arr);
                System.out.println(s);
            }
        }
        sc.close();
    }
}