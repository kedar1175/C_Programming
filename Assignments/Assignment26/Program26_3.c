#include<stdio.h>
#include<stdlib.h>

int Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return EXIT_SUCCESS;
}
