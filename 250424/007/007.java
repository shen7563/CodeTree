import java.util.Scanner;

class Member {
    String code;
    String space;
    int time;

    public Member(String code, String space, int time) {
        this.code = code;
        this.space = space;
        this.time = time;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String code = sc.next();
        String space = sc.next();
        int time = sc.nextInt();

        Member member = new Member(code, space, time);
        System.out.println("secret code : " + member.code);
        System.out.println("meeting point : " + member.space);
        System.out.println("time : " + member.time);
        sc.close();
    }
}