import java.util.Scanner;

class Bomb {
    String code;
    String color;
    int time;

    public Bomb(String code, String color, int time) {
        this.code = code;
        this.color = color;
        this.time = time;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String code = sc.next();
        String color = sc.next();
        int time = sc.nextInt();

        Bomb bomb = new Bomb(code, color, time);
        System.out.println("code : " + bomb.code);
        System.out.println("color : " + bomb.color);
        System.out.println("second : " + bomb.time);
        sc.close();
    }
}