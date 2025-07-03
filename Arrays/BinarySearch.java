
public class BinarySearch {

    public static int BinarySearch(int num[], int key) {
        int start = 0, end = num.length - 1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (num[mid] == key) {
                return mid;
            }
            if (num[mid] < key) {
                start = mid + 1;
            }
            if (num[mid] > key) {
                end = mid - 1;
            }

        }
        return -1;
    }

    public static void main(String Args[]) {
        int num[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        int index = BinarySearch(num, 10);
        System.out.println("The index of the element is: " + index);
    }
}
