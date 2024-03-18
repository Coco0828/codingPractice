import java.util.*;

class Sculpture implements Comparable<Sculpture> {
    int height;
    int weight;

    public Sculpture(int height, int weight) {
        this.height = height;
        this.weight = weight;
    }

    @Override
    public int compareTo(Sculpture other) {
        if (this.height != other.height) {
            return Integer.compare(this.height, other.height);
        } else {
            return Integer.compare(this.weight, other.weight);
        }
    }
}

public class a362 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Sculpture> sculptures = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int height = scanner.nextInt();
            int weight = scanner.nextInt();
            sculptures.add(new Sculpture(height, weight));
        }

        Collections.sort(sculptures);

        long totalDistance = 0;
        int currentPosition = 0;

        for (Sculpture sculpture : sculptures) {
            totalDistance += Math.abs(currentPosition - sculpture.height);
            currentPosition++;
        }

        System.out.println(totalDistance);
        scanner.close();
    }
}