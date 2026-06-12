#include<stdio.h>
int main()
{
    int a , b , temp;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After execeution:\n");
    printf("a = %d ",a);
    printf("b = %d \n",b);
    return 0;
}