
public class FloydTriangle {

  //Counter is globaly than their value will not reset
    public static void FloydTri(int n, int counter) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(counter + " ");
                counter++;
            }
            System.out.println();
        }
    }

    public static void main(String Args[]) {
        FloydTri(7, 1);
    }
}
