#include<stdio.h>
int main()
{
    int card,pin;
    printf("Enter 1/0:");
    scanf("%d",&card);

    if (card==1)
    {
        printf("Enter the pin:");
        scanf("%d",&pin);
        if (pin==2205)
        {
            printf("Pin is verified");

        }
        else{
            printf("Pin in not verified");
        }
    }
    else{
        printf("Card is not inserted");

    }
    return 0;
}