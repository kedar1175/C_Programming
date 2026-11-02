#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart >= 0 && iEnd >= 0 && iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }
    else
    {
        printf("Invalid Input\n");
        exit(EXIT_SUCCESS);    
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d",iRet);

    return EXIT_SUCCESS;
}
