
public class Butterfly {

    public static void butterfly(int n) {
        // Upper Butterfly
        for (int i = 1; i <= n; i++) {
            // For Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            // For Spaces
            for (int j = 1; j <= (2*(n-i)); j++) {
                System.out.print(" ");
            }
            // For Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
        // Inverted Butterfly
        for (int i = n; i >= 1; i--) {
            // For Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            // For Spaces
            for (int j = 1; j <= (2*(n-i)); j++) {
                System.out.print(" ");
            }
            // For Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            
            System.out.println();
        }

    }

    public static void main(String Args[]) {
        butterfly(4);
    }
}
