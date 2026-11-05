#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMultFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iMultFact = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMultFact = iMultFact * iCnt;
        }
    }

    return iMultFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factors is : %d",iRet);

    return EXIT_SUCCESS;
}
