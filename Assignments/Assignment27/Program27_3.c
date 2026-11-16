#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int i = 0;
    int iSmall = 0;
    int iCap = 0;
    int iFreq = 0;

    while(str[i] != 0)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iSmall++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCap++;
        }
        i++;
    }

    iFreq = iSmall - iCap;

    return iFreq;
}

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter an String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Frequency is : %d",iRet);
    
    return EXIT_SUCCESS;
}
