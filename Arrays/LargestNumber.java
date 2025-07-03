
public class LargestNumber {

    public static int largestNumber(int numbers[]) {
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;
        for (int i = 0; i < numbers.length; i++) {
            if (largest < numbers[i]) {
                largest = numbers[i];
            }
            if (smallest > numbers[i]) {
                smallest = numbers[i];
            }
        }
        System.out.println("The Smallest Number is : " + smallest);
        return largest;
    }

    public static void main(String Args[]) {
        int numbers[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        System.out.println("The Largest Number is :" + largestNumber(numbers));
    }
}
