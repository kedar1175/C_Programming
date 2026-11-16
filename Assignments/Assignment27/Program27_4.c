#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int i = 0;
    int iCnt = 0;

    while(str[i] != 0)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
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
    BOOL bRet = 0;
    
    printf("Enter an String : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }
    
    return EXIT_SUCCESS;
}
