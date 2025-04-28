import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 입력받기
        int m1 = sc.nextInt(); // 시작 월
        int d1 = sc.nextInt(); // 시작 일
        int m2 = sc.nextInt(); // 목표 월
        int d2 = sc.nextInt(); // 목표 일
        String targetDay = sc.next(); // 찾고자 하는 요일 (예: "Mon")

        // 요일 배열과 월별 일수 배열
        String[] weekdays = new String[] { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
        int[] daysInMonth = new int[] { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // 2024년은 윤년

        // 시작 요일의 인덱스
        int startIndex = 0; // 월요일은 0번째 인덱스

        // 날짜 간의 총 일수 계산
        int totalDays = 0;
        if (m1 == m2) {
            totalDays = d2 - d1;
        } else {
            totalDays += daysInMonth[m1] - d1; // 첫 달의 남은 일수
            for (int i = m1 + 1; i < m2; i++) {
                totalDays += daysInMonth[i]; // 중간 달의 일수
            }
            totalDays += d2; // 마지막 달의 일수
        }

        // 요일 등장 횟수 계산
        int targetIndex = 0;
        for (int i = 0; i < weekdays.length; i++) {
            if (weekdays[i].equals(targetDay)) {
                targetIndex = i;
                break;
            }
        }

        int count = 0;
        for (int i = 0; i <= totalDays; i++) {
            int currentDayIndex = (startIndex + i) % 7;
            if (currentDayIndex == targetIndex) {
                count++;
            }
        }

        // 결과 출력
        System.out.println(count);

        sc.close();
    }
}