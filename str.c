#include<stdio.h>
int main()
{
    /*
    char name[10] = {'A','K','H','I','L','A','\0'};
    char ch[10] = {"Akhila"};
    printf("%s \n",name);
    printf("%s \n",ch);
    return 0;
    */

    char name[10];
    printf("Enter the name:");
    scanf("%s", name);
    printf("Your name is:%s",name);
    return 0;
}