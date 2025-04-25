import java.util.Scanner;
import java.util.Arrays;

class LivePlace {
    String name;
    String address;
    String place;

    public LivePlace(String name, String address, String place) {
        this.name = name;
        this.address = address;
        this.place = place;
    }
}
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        LivePlace[] livePlaces = new LivePlace[10];
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            String name = sc.next();
            String address = sc.next();
            String place = sc.next();
            livePlaces[i] = new LivePlace(name, address, place);
        }
        int lastindex = 0;
        for(int i = 1; i < n; i++) {
            if(livePlaces[i].name.compareTo(livePlaces[lastindex].name) > 0) {
                lastindex = i;
            }
        }
        System.out.println("name " + livePlaces[lastindex].name);
        System.out.println("addr " + livePlaces[lastindex].address);
        System.out.println("city " + livePlaces[lastindex].place);
        sc.close();
    }
}