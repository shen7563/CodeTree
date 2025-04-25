import java.util.Scanner;

class Score {
    String name;
    int score;
    public Score() {
        this.name = " ";
        this.score = 0;
    }
    public Score(String name, int score) {
        this.name = name;
        this.score = score;
    }
}
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int index = -1;
        Score[] scores = new Score[5];
        for(int i = 0; i < 5; i++) {
            String name = sc.next();
            int score = sc.nextInt();
            scores[i] = new Score(name, score);
        }
        int minScore = Integer.MAX_VALUE;
        for(int i = 0; i < 5; i++) {
            if(scores[i].score < minScore) {
                minScore = scores[i].score;
                index = i;
            }
        }
        System.out.println(scores[index].name + " " + scores[index].score);
        sc.close();
    }
}