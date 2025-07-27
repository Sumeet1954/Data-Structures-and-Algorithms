//(c) If lengths of three sides of a triangle are input through the keyboard, 
//write a program to find the area of the triangle.

#include<stdio.h>
#include<math.h>

int main(){
    int s1,s2,s3;
    printf("Enter the Values of side:");
    scanf("%d%d%d",&s1,&s2,&s3);
    // S is Semiperimeter
    int S = (s1*s2*s3)/2;
    //A is the Area of triangle
    float A = sqrt((S*(S-s1))*(S-s2)*(S-s3));
    printf("The Area is :%.2f",A);
}