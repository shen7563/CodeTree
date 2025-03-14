public class Main {
    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        int c = 3;

        int total = a + b + c;

        a = b = c = total;
        
        System.out.printf("%d %d %d", a, b, c);
    }
}