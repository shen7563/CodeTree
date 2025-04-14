import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.next();
        String b = sc.next();
        
        String new_a = "", new_b = "";
        for(int i = 0; i < a.length(); i++) {
            char[] arr = a.toCharArray();
            if(arr[i] >= '0' && arr[i] <= '9') {
                new_a += arr[i];
            }
        }
        for(int i = 0; i < b.length(); i++) {
            char[] arr = b.toCharArray();
            if(arr[i] >= '0' && arr[i] <= '9') {
                new_b += arr[i];
            }
        }
        int num_a = Integer.parseInt(new_a);
        int num_b = Integer.parseInt(new_b);
        int sum = num_a + num_b;
        System.out.println(sum);
        sc.close();
    }
}