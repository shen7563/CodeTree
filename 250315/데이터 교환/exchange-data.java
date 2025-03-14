public class Main {
    public static void main(String[] args) {
        int a = 5;
        int b = 6;
        int c = 7;
        int temp1 = 0;
        int temp2 = 0;

        temp1 = a;
        a = c;
        temp2 = b;
        b = temp1;
        c = temp2;

        System.out.printf("%d\n%d\n%d", a, b, c);
    }
}