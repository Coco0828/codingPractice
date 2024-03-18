import java.util.Scanner;

public class a364 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int m = scanner.nextInt();
        
        for (int i = 0; i < m; i++) {
            int decimalNumber = scanner.nextInt();
            System.out.println(convertToMysterious(decimalNumber));
        }
        
        scanner.close();
    }
    
    public static String convertToMysterious(int N) {
        int a = 0;
        int b = 0;
        int c = 0;
        
        while (comb(a, 3) <= N) {
            a++;
        }
        a--;
        
        N -= comb(a, 3);
        
        while (comb(b, 2) <= N) {
            b++;
        }
        b--;
        
        N -= comb(b, 2);
        
        c = N;
        
        return "" + a + b + c;
    }
    
    public static int comb(int m, int n) {
        if (m < n) {
            return 0;
        }
        return factorial(m) / (factorial(n) * factorial(m - n));
    }
    
    public static int factorial(int n) {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}