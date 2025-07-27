//(h) Two numbers are input through the keyboard into two locations C and D.
// Write a program to interchange the contents of C and D.

#include<stdio.h>

int main(){
    int D, C;
    printf("Enter the Values of  C and D");
    scanf("%d%d",&C,&D);
    int temp = C;
    C = D;
    D = temp;
    printf("The Values of C and D is  %d and %d .",C , D);
}