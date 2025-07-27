//(i) Consider a currency system in which there are notes of seven denominations, 
//namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard,
// write a program to compute the smallest number of notes that will combine to give Rs. N.

#include<stdio.h>

int main(){
    int money;
    int Rs_1 = 0,Rs_5=0,Rs_10=0,Rs_50=0,Rs_100=0;
    printf("Enter the money should you have: ");
    scanf("%d",&money);
    Rs_100 = money/100;
    money = money%100;
    Rs_50 = money/50;
    money = money%50;
    Rs_10 = money/10;
    money = money%10;
    Rs_5 = money/5;
    money = money%5;
    Rs_1 = money/1;
    money = money%1;
    printf("The Minimun no. of notes should be :\n");
    printf("100 Rs: %d\n",Rs_100);
    printf("50 Rs: %d\n",Rs_50);
    printf("10 Rs: %d\n",Rs_10);
    printf("5 Rs: %d\n",Rs_5);
    printf("1 Rs: %d\n",Rs_1);
}