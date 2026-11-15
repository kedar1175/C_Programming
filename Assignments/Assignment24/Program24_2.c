#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter an String : \n");
    scanf("%[^'\n']s",&arr[0]);

    printf("Enter an Character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(&arr[0], cValue);

    printf("Character Frequency is : %d",iRet);

    return EXIT_SUCCESS;
}
