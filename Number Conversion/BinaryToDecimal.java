
public class BinaryToDecimal {

    public static int BinToDec(int BinNum) {
        int MyNum = BinNum;
        int pow = 0;
        int Dec = 0;
        while (BinNum > 0) {
            int lastDigit = BinNum % 10;
            // System.out.println("Last Digit is :"+lastDigit);
            Dec = Dec + (lastDigit * (int) Math.pow(2, pow));
            pow++;
            BinNum = BinNum / 10;
            // System.out.println("BinNum is :"+BinNum);
        }

        System.out.println("The Decimal of " + MyNum + " is :" + Dec);
        return 0;
    }

    public static void main(String args[]) {
        BinToDec(1011);
    }
}
