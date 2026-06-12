#include<stdio.h>
int main()
{
    int marks[2][3] = {44,45,22,34,55,78};
    /*
    //Accessing
    printf("Student marks:%d \n", marks[0][2]);
    printf("Student marks:%d \n", marks[1][1]);
    printf("Student marks:%d \n", marks[1][2]);

    //Accessing stduent 1 all marks
    printf("Student 1 Chem marks:%d \n", marks[0][0]);
    printf("Student 1 Bio marks:%d \n", marks[0][1]);
    printf("Student 1 Math marks:%d \n", marks[0][2]);

    //Accessing student 2 marks
    printf("Student 2 Chem marks:%d \n", marks[1][0]);
    printf("Student 2 Bio marks:%d \n", marks[1][1]);
    printf("Student 2 Math marks:%d \n", marks[1][2]);
    */

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d \n" , marks[i][j]);
        }

    }


    return 0 ;
}