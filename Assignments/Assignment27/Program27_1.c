#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Number of Capital Character is : %d",iRet);
    
    return EXIT_SUCCESS;
}
