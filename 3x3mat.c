// 3x3 matrix i/p from the user

#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of row:");
    scanf("%d",&row);

    printf("Enter number of col:");
    scanf("%d",&col);

    int matrix[row][col];
    printf("Enter array elements: \n");

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
        printf("Elements[%d][%d]:", i , j);
        scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Array elements are:\n");

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("%d",matrix[i][j]);
            
        }

        printf("\n");    
    }

    
    return 0 ;
}