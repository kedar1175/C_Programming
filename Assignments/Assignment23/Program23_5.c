#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCnt = 0;

    while(str[i] != 0)
    {
        if(str[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number of WhiteSpace is : %d",iRet);

    return EXIT_SUCCESS;
}
