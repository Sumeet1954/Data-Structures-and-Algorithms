
public class LinearSearch {
        public static int LinearSearch(int numbers[],int key){
            for(int i = 0; i<numbers.length;i++){
                if(numbers[i]==key){
                    return i;
                }
            }
            return -1;
        }

    public static void main(String Args[]) {
       int numbers[] = {2,4,6,8,10,12,14,16,18,20};
       int key = 10;
         int index = LinearSearch(numbers, key);
         if(index == -1){
            System.out.println("!Not Found");
         }
         else{
            System.out.println("The Key at index: "+index);
         }
    }
}
