// to take i/p from the user
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of row:");
    scanf("%d",&row);

    printf("Enter number of col:");
    scanf("%d",&col);

    int marks[row][col];
    printf("Enter array elements: \n");

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Enter marks[%d][%d]:", i , j );
            scanf("%d",&marks[i][j]);
        }
    }

    return 0 ;


}