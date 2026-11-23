#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : SumFactors
// Input         : Integer
// Output        : Integer
// Description   : Calculates the sum of all proper factors of a given number
// Author        : Kedar Sanjay Joshi
//
//////////////////////////////////////////////

int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)
