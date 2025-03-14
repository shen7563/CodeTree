public class Main {
    public static void main(String[] args) {

        double ft_to_cm = 30.48;
        double mi_to_cm = 160934;

        double ft = 9.2;
        double mi = 1.3;

        System.out.printf("%.1fft = %.1fcm\n", ft, ft * ft_to_cm);
        System.out.printf("%.1fmi = %.1fcm\n", mi, mi * mi_to_cm);
    }
}