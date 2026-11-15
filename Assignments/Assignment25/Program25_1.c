#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    BOOL bret = FALSE;
    
    printf("Enter the Character : \n");
    scanf("%c",&ch);

    bret = ChkAlpha(ch);

    if(bret == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return EXIT_SUCCESS;
}
