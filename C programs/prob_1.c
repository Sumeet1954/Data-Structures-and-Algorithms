#include <stdio.h>

int main()
{
    int balance = 1000;
    char inp;
    printf("Enter your input :");
    scanf("%c", &inp);

    int amount;
    

    switch (inp)
    {
    case 'D':
    printf("Enter the amount:");
    scanf("%d", &amount);

        balance = balance + amount;
        break;

    case 'W':
        printf("Enter the amount:");
        scanf("%d", &amount);
        if (amount <= 1000)
        {
            balance = balance - amount;
        }
        break;
    }
    printf("The balance is :%d", balance);
    return 0;
}
