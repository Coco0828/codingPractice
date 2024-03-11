import java.util.Scanner;

public class c186 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] names = input.split(" ");

        for (String name : names) {
            System.out.println(name);
        }
    }
}