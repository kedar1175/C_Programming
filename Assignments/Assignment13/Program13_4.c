#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iAns = iAns * iDigit;

        iNo = iNo / 10;
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication is : %d",iRet);

    return EXIT_SUCCESS;
}
