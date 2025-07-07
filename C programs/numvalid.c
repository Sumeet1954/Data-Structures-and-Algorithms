#include<stdio.h>
#include<math.h>
int main() {
    unsigned long number;
    printf("The number is\n", number);
    scanf("%lu", &number);

    int size = log10(number) + 1;
    if(size == 10){
        printf("The number is valid\n");
    } else {
        printf("The number is not valid\n ");
    }
}
