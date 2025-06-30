// Character Pattern 
    import java.util.*;

    public class CharacterPattern {

        public static void main(String[] args) {
            System.err.println("Enter The Number of Pattern");
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            char ch = 'A';
            for (int line = 1; line <= n; line++) {
                for (int number = 1; number <= line; number++) {
                    System.out.print(ch);
                    ch++;
                }
                System.out.println();
            }
        }
    }
