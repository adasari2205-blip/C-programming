//to perform addition of 2x2 matrix
#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];

    printf("Enter the first matrix elements:");
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the secong matrix elements:");
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Addition of matrix:");
        for(int i = 0 ; i < 2 ; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                sum[i][j]= a[i][j] + b[i][j];
            }
        }
    printf("Sum of array: \n");
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("%d",sum[i][j]);

        }
        printf("\n");
    }
    return 0 ;

    
}