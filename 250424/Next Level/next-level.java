import java.util.Scanner;

class Member {
    String id;
    int level;

    public Member() {
        this.id = "codetree";
        this.level = 10;
    }
    public Member(String id, int level) {
        this.id = id;
        this.level = level;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Member member = new Member();
        System.out.printf("user %s lv %d\n", member.id, member.level);
        
        String id = sc.next();
        int level = sc.nextInt();

        member.id = id;
        member.level = level;

        System.out.printf("user %s lv %d\n", member.id, member.level);
        sc.close();
    }
}