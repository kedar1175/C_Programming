#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is Found\n");
    }
    else
    {
        printf("Charcter not Found\n");
    }

    return EXIT_SUCCESS;
}
