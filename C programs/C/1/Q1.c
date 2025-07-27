//(a) If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
//(Hint: Use the modulus operator '%')

#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the integer of five digit :");
    scanf("%d",&num);
    while(num>0){
        sum += (num%10);
        num /= 10;
    }
    printf("The Sume is :%d\n",sum);
}
