
public class Pairs {

    public static void pairs(int num[]) {
        int count = 0;
        for (int i = 0; i < num.length; i++) {
            int curr = num[i];
            for (int j = i + 1; j < num.length; j++) {
                System.out.print("(" + curr + ", " + num[j] + ")");
                count++;
            }
            System.out.println();
        }
        System.out.println("Total pairs: " + count);
    }

    public static void main(String Args[]) {
        int num[] = {2, 4, 6, 8, 10};
        pairs(num);
    }
}
