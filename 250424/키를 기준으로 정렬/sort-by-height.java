import java.util.Scanner;
import java.util.Arrays;

class Person implements Comparable<Person> {
    String name;
    int hegiht;
    int weight;
    public Person(String name, int hegiht, int weight) {
        this.name = name;
        this.hegiht = hegiht;
        this.weight = weight;
    }
    @Override
    public int compareTo(Person person) {
        return this.hegiht - person.hegiht;
    }
}
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Person[] persons = new Person[n];
        for (int i = 0; i < n; i++) {
            String name = sc.next();
            int hegiht = sc.nextInt();
            int weight = sc.nextInt();
            persons[i] = new Person(name, hegiht, weight);
        }
        Arrays.sort(persons);
        for(int i = 0; i < n; i++) {
            System.out.println(persons[i].name + " " + persons[i].hegiht + " " + persons[i].weight);
        }
        sc.close();
    }
}