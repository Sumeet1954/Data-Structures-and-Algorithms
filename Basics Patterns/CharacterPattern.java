// Character Pattern 
    import java.util.*;

    public class index {

        public static void main(String[] args) {
            System.err.println("Enter The Number of Pattern");
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            char ch = 'A';
            for (int line = 1; line <= n; line++) {
                for (int character = 1; character <= line; character++) {
                    System.out.print(ch);
                    ch++;
                }
                System.out.println();
            }
        }
    }
