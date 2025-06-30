import java.util.*;

public class index {

    public static void main(String[] args) {
        System.err.println("Enter The Number of Pattern");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
