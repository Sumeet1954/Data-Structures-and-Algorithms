
public class DecimalToBinary {

    public static int DecToBin(int DecNum) {
        int MyNum = DecNum;
        int pow = 0;
        int Bin = 0;
        while (DecNum > 0) {
            int rem = DecNum % 2;
            Bin = Bin + (rem * (int) Math.pow(10, pow));
            pow++;
            DecNum /= 2;
        }

        System.out.println("The Decimal of " + MyNum + " is :" + Bin);
        return 0;
    }

    public static void main(String args[]) {
        DecToBin(15);
    }
}
