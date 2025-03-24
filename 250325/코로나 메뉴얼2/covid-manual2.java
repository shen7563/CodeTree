import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String sym[] = new String[3];
        int temp[] = new int[3];
        int count = 0;
        int emergency[] = new int[4];
        for(int i = 0; i < 3; i++) {
            sym[i] = sc.next();
            temp[i] = sc.nextInt();
            if(sym[i].charAt(0)== 'Y') {
                if(temp[i] >= 37) {
                    emergency[0]++;
                    count++;
                }
                else {
                    emergency[2]++;
                }
            }
            else {
                if(temp[i] >= 37) {
                    emergency[1]++;
                }
                else {
                    emergency[3]++;
                }
            }
        }
        for(int i = 0; i < 4; i++) {
            System.out.print(emergency[i] + " ");
        }
        if(count >= 2) {
            System.out.print("E");
        }
        sc.close();
    }
}