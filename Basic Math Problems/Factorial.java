
public class Factorial{

    public static int factorial(int n) {
        int f = 1;
        for (int i = 1; i <= n; i++) {
            f = f * i;
        }
        return f;
    }

    public static void main(String args[]) {
        int n = 6;
        int fac = factorial(n);
        System.out.print(fac);
    }
}
