//WAP program for swap first digit from last digit ,number is enter through keyboard 
    #include<stdio.h>
    #include<math.h>

void main(){
    int number;
    printf("Enter the Number :");
    scanf("%d",&number);
    int count = log10(number);
    int div = pow(10 , count);
    int first_digit = number/div;
    int remainder = number % div;
    int last_digit = number %10;
    int result = (((last_digit*div)+remainder)-last_digit) + first_digit;
    printf("The Result is :%d\n",result );
    }