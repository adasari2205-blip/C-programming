#include<stdio.h>
int main()
{
    int n;
    prinf("Enter the size:");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Array elements are: \n");

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;

}