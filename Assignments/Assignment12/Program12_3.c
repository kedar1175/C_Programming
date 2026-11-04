#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iCount = iNo % 10;

        if(iCount == 2)
        {
            iDigit++;
        }

        iNo = iNo / 10;
    }

    return iDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Count of 2 is : %d",iRet);

    return EXIT_SUCCESS;
}
