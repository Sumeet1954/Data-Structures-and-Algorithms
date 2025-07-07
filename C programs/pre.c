#include<stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 30; 
    int result = (num3++ + num1++ + (++num2));
    
    printf("The Result is : %d\n", result);
    printf("The Value of num1 is: %d\n", num1);
    
    printf("The Value of num1 is: %d\n", num2);
    
    printf("The Value of num1 is: %d\n", num3); 
    
}