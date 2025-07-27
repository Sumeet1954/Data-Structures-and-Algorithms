//(b) If a five-digit number is input through the keyboard, write a program to reverse the number.

#include<stdio.h>

int main(){
 int num,rev=0;
 printf("Enter the Number of Five digit:");
 scanf("%d",&num);
 while(num>0){
    rev = (rev+(num%10))*10;
    num /= 10;
 }
 rev /= 10;
 printf("The Reversed Number is :%d",rev);
}