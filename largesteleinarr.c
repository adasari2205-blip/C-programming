#include<stdio.h>
int main()
{
    int a[5];
    int largest;

    printf("Enter the size of the array:");

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    largest = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Largest ele = %d", largest);
    return 0;


}