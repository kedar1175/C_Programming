#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
   int iCnt = 0;
   int iFactOdd = 0;
   int iFactEven = 0;
   int iAns = 0;

   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt =  1, iFactEven = 1, iFactOdd = 1; iCnt <= iNo; iCnt++)
   {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }
   }
    
   iAns = iFactEven - iFactOdd;

   return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return EXIT_SUCCESS;
}
