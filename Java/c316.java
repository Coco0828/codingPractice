import java.util.Scanner;

public class c316 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int maxDistance = -9999;
        int point1 = 0, point2 = 0;

        for (int i = 0; i < N; i++) {
            int x1 = scanner.nextInt();
            int y1 = scanner.nextInt();

            for (int j = i + 1; j < N; j++) {
                int x2 = scanner.nextInt();
                int y2 = scanner.nextInt();
                
                int distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

                if (distance > maxDistance) {
                    maxDistance = distance;
                    point1 = i;
                    point2 = j;
                }
            }
        }
        System.out.println(point1 + " " + point2);
        
    }
}