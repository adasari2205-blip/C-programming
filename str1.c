// to print lentgh of th string

#include<stdio.h>
#include<string.h>
int main()
{
    // to find the length of a string
    /*
    char name[10];
    printf("Enter a name:");
    gets(name);

    printf("%d",strlen(name));
    return 0;
    

    // to combine the string
    
    char name[10];
    printf("Enter a name: ");
    gets(name);

    char n[10];
    printf("Enter the name:");
    gets(n);

    printf("%s \n",strcat(name,n));
    return 0;
    

    //to copy the strings
    

    char oldstr[10] , newstr[10];
    printf("Enter the old string:");
    gets(oldstr);
    printf("Enter the new string:");
    gets(newstr);
    printf("%s",strcpy(oldstr,newstr));
    return 0 ;
    
    
    //to reverse the string
    char str[50];
    printf("Enter the name:");
    scanf("%s",str);
    int i , len;
    len = strlen(str);
    for(int i = len - 1 ; i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
    */
  
    //to fing the palindrome of a string

    char og[50];
    char rev[50];
    printf("Enter the original string:");
    scanf("%s",og);
    int len = strlen(og);
    for(int i = 0 ; i <= len ; i++)
    {
        rev[i] = og[len - 1 - i];

    }

    rev[len] = '\0' ;

     if(strcmp(og,rev)==0)
    {
        printf("It is palindrome");

    }
    else 
    {
        printf("String is not palindrome.");

    }
      
    return 0;

    

   

}

