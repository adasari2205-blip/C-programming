#include<stdio.h>
int main()
{
    int marks;
    float income;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("Enter the income:");
        scanf("%f",&income);
        if (income<300000)
        {
            printf("Scholarship is eligible");

        }
        else
        {
            printf("Scholarship is not eligible");
        }
    }
        else
    {
        printf("Scholarhsip is not eligible");

    }
    return 0;
    
}