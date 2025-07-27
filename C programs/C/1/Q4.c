//(d) Write a program to receive Cartesian co-ordinates (x, y) of a point and convert
// them into polar co-ordinates (r, phi) . 
//Hint: r = sqrt(x ^ 2 + y ^ 2) and varphi = arctan(y / x)

#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    float r=0,phi=0;
    printf("Enter the values of x and y");
    scanf("%d%d",&x,&y);

    r = sqrt((x^2)+(y^2));
    phi = atan(y/x);

    printf("The Polar Cordinates are :(%.2f,%.2f)",r,phi);
}