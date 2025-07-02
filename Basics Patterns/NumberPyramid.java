
public class index {

    public static void NumPyramid(int n) {
        for (int i = 1; i <= n; i++) {
            int num = 1;
            //For Stars
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print(num);
                num++;
            }
            //For Spaces
            for (int j = 1; j <= i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void main(String Args[]) {
        NumPyramid(5);
    }
}
