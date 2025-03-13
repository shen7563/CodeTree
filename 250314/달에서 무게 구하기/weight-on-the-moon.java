public class Main {
    public static void main (String[] args) {
        int weight = 13;
        double moon_gravity = 0.165;
        double weight_on_moon = weight * moon_gravity;
        System.out.printf("%d * %.6f = %.6f", weight, moon_gravity, weight_on_moon);
    }
}