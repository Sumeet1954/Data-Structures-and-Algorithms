
import java.util.*;

public class Pattern {

    public static void main(String[] args) {
        System.err.println("Enter The Number of Pattern");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int line = 1; line <= n; line++) {
            for (int number = 1; number <= line; number++) {
                System.out.print(number);
            }
            System.out.println();
        }
    }
}
