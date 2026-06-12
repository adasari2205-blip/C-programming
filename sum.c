//Adding +1 to the ele
#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int i = 1;
    printf("Enter a number:");
    scanf("%d",&n);

    do {

        sum = sum + i;
        i++;

    }while( i <= n);

    printf("Sum:%d",sum);
    return 0;
}