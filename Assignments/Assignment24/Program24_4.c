#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int j = 0;
    
    while(str[i] != '\0')
    {
        i++;
    }

    i = i - 1;
    while(i >= 0)
    {
        if(str[i] == ch)
        {
            return i;
        }

        i--;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter an String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter an Character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d",iRet);

    return EXIT_SUCCESS;
}
