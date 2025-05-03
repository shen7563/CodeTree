import java.util.Scanner;

public class Main {

    public static final int MAX_N = 201;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt(); // N개의 직사각형
        int offset = 100; // 좌표를 0~200으로 맞추기 위한 오프셋
        boolean isBlue = false; // 파란색으로 칠해진 영역인지 여부, 처음은 빨간색이므로 false
        boolean[][] area = new boolean[MAX_N][MAX_N]; // 200 x 200
        for (int i = 0; i < n; i++) {
            int x1 = sc.nextInt() + offset; // 직사각형의 왼쪽 아래 꼭지점
            int y1 = sc.nextInt() + offset;
            int x2 = sc.nextInt() + offset; // 직사각형의 오른쪽 위 꼭지점
            int y2 = sc.nextInt() + offset;
            
            for(int x = x1; x < x2; x++) {
                for (int y = y1; y < y2; y++) {
                    area[x][y] = isBlue; // 현재 색상으로 칠하기
                }
            }
            isBlue = !isBlue; // 다음 직사각형은 색상을 반전
        }

        int blueCount = 0; // 파란색으로 칠해진 영역의 개수
        for (int x = 0; x < MAX_N; x++) {
            for (int y = 0; y < MAX_N; y++) {
                if (area[x][y]) { // 파란색 영역이면
                    blueCount++; // 개수 증가
                }
            }
        }
        System.out.println(blueCount); // 결과 출력
        sc.close();
    }
}
