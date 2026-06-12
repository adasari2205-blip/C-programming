#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf(" %d" ,&a );

    int b;
    printf("Enter a number:");
    scanf("%d" , &b);

    int add  = a + b ;
    printf("Addition of a and b is: %d \n",add);
    return 0;
}