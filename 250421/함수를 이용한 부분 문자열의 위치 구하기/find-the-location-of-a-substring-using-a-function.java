import java.util.Scanner;

public class Main {

    public static String str;
    public static String substr;

    public static int startSubstringIndex() {
        int index = str.indexOf(substr);
        return index;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        str = sc.next();
        substr = sc.next();
        System.out.println(startSubstringIndex());
        sc.close();
    }
}
