#include<stdio.h>

void main()
{
    
    char a;
    
    printf("Enter the key--->>");
    scanf("%c",&a);
    
    if(a>='A' && a<='Z')
    {
        printf("capital letters \n");
    }
    
    else if(a>='a' && a<='z')
    {
        printf("small letters \n");
    }
    
    else if(a>='0' && a<='9')
    {
        printf("Numbers \n");
    }
    else
    {
        printf("special char");
    }
    
    
    
}

