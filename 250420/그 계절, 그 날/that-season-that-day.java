import java.util.Scanner;

public class Main {

    public static boolean isLeapYear(int year) {
        if(year % 4 == 0) {
            if(year % 100 == 0) {
                if(year % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

    public static boolean isCorrect(int year, int month, int day) {
        if(month == 2) {
            if(isLeapYear(year)) {
                if(day > 29) {
                    return false;
                }
            }
            else {
                if(day > 28) {
                    return false;
                }
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11) {
            if(day > 30) {
                return false;
            }
        } else if(month > 12 || month < 1) {
            return false;
        } else if(day > 31 || day < 1) {
            return false;
        }
        return true;
    }
    public static void isWeather(int year, int month, int day) {
        if(isCorrect(year, month, day)) {
            if(month == 1 || month == 2 || month == 12) {
                System.out.println("Winter");
            } else if(month == 3 || month == 4 || month == 5) {
                System.out.println("Spring");
            } else if(month == 6 || month == 7 || month == 8) {
                System.out.println("Summer");
            } else if(month == 9 || month == 10 || month == 11) {
                System.out.println("Fall");
            }
        } else {
            System.out.println(-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        int month = sc.nextInt();
        int day = sc.nextInt();

        isWeather(year, month, day);
        sc.close();
    }
}