//(g) If value of an angle is input through the keyboard,
// write a program to print all its Trigonometric ratios.
//not done by me 

#include<stdio.h>
#include<math.h>

int main() {
    int angle;
    printf("Enter the Angle (in degrees): ");
    scanf("%d", &angle);

    float radians = angle * (3.14159265 / 180.0);
    float sinv = sin(radians);
    float cosv = cos(radians);
    float tanv = tan(radians);

    printf("sin(%d) = %.4f\n", angle, sinv);
    printf("cos(%d) = %.4f\n", angle, cosv);
    if (cosv != 0)
        printf("tan(%d) = %.4f\n", angle, tanv);
    else
        printf("tan(%d) is undefined\n", angle);

    if (sinv != 0)
        printf("cosec(%d) = %.4f\n", angle, 1.0/sinv);
    else
        printf("cosec(%d) is undefined\n", angle);

    if (cosv != 0)
        printf("sec(%d) = %.4f\n", angle, 1.0/cosv);
    else
        printf("sec(%d) is undefined\n", angle);

    if (tanv != 0)
        printf("cot(%d) = %.4f\n", angle, 1.0/tanv);
    else
        printf("cot(%d) is undefined\n", angle);

    return 0;
}