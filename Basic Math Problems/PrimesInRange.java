
public class PrimesInRange {

    public static boolean isPrime(int n) {
        if (n == 2) {
            return true;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void PrimesInRange(int n) {
        for (int i = 2; i <= n; i++) {
            if (isPrime(i))//If True then printing i 
            {
                System.out.println(i);
            }
        }
    }

    public static void main(String args[]) {
        PrimesInRange(12);
    }
}
