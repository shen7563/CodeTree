import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        int[] arr1 = new int[100];
        int[] arr2 = new int[100];
        int[] draw = new int[2001];
        int current = 0;
        int offset = 1000;
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt();
            String s = sc.next();
            if(s.equals("L")) {
                arr1[i] = current - x;
                arr2[i] = current;
                current -= x;
            }
            else {
                arr1[i] = current;
                arr2[i] = current + x;
                current += x;
            }
            arr1[i] += offset;
            arr2[i] += offset;
        }
        for(int i = 0; i < n; i++) {
            for(int j = arr1[i]; j < arr2[i]; j++) {
                draw[j]++;
            }
        }
        int count = 0;
        for(int i = 0; i < draw.length; i++) {
            if(draw[i] >= 2) {
                count++;
            }
        }
        System.out.println(count);
    }
}