
public class HalfPyramid {
  
    public static void HalfPyramid(int n) {
        for (int i = 1; i <= n; i++) {
            //For Spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            //For Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        HalfPyramid(5);

    }
}
