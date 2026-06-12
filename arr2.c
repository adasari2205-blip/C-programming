//Sum of ele in array
#include<stdio.h>
int main()
{
    int n;
    prinf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    printf("Enter the array elements:");

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of Array elements : %d \n", sum );
    return 0 ;

}
