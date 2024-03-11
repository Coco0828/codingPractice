import java.util.Scanner;

public class c188 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            long[] p = new long[n + 1];
            p[0] = 1;

            for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j++) {
                    p[j] += p[j - i];
                }
            }

            System.out.println(p[n]);
        }
    }
}