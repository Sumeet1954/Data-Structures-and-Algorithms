//WAP program for swap first digit from last digit ,number is enter through keyboard 
#include<stdio.h>

int main(){
    int number = 12345;
    int sum = 0;
    sum = sum + number % 10;
    number = number/10;

    sum = sum + number % 10;
    number = number/10;

    sum = sum + number % 10;
    number = number/10;

    sum = sum + number % 10;
    number = number/10;

    sum = sum + number % 10;
    number = number/10;

    printf("The Sum of 5 digit is : %d",sum);

}