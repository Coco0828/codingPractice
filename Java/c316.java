import java.util.Scanner;

public class c316 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int maxDistance = -9999;
        System.out.println("N: " + N);
        int point1 = 0, point2 = 0;

        for (int i = 0; i < N; i++) {
            int x1 = scanner.nextInt();
            int y1 = scanner.nextInt();
            System.out.println("x1 y1: "+x1 + " " + y1);
            for (int j = i + 1; j < N; j++) {
                int x2 = scanner.nextInt();
                int y2 = scanner.nextInt();
                System.out.println("x2 y2: "+x2 + " " + y2);
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